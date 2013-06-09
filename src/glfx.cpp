/* Copyright (c) 2011, Max Aizenshtein <max.sniffer@gmail.com>
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the <organization> nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */

#include <map>
#include <string>
#include <cstring>
#include <sstream>
#include <cstdio>
#include <cassert>

#ifndef _MSC_VER
typedef int errno_t;
#include <errno.h>
#endif

#include "GL/glew.h"

// workaround for Linux distributions that haven't yet upgraded to GLEW 1.9
#ifndef GL_COMPUTE_SHADER
#define GL_COMPUTE_SHADER 0x91B9
#endif

#include "gl/glfx.h"
#include "glfxClasses.h"
#include "glfxParser.h"

#ifdef _MSC_VER
#define YY_NO_UNISTD_H
#endif
#include "glfxScanner.h"

using namespace std;

namespace glfxParser {

#ifndef _MSC_VER

errno_t strcpy_s(char* dst, size_t size, const char* src)
{
    assert(size >= (strlen(src) + 1));
    strncpy(dst, src, size-1);
    dst[size-1]='\0';
    return errno;
}

int fopen_s(FILE** pFile, const char *filename, const char *mode)
{
    *pFile = fopen(filename, mode);
    return errno;
}

int fdopen_s(FILE** pFile, int fildes, const char *mode)
{
    *pFile = fdopen(fildes, mode);
    return errno;
}

#endif

Effect *gEffect=NULL;
bool gLexPassthrough=true;

Program::Program(const map<ShaderType,Shader>& shaders)
{
    map<ShaderType,Shader>::const_iterator it;
    
    ShaderType types[NUM_OF_SHADER_TYPES]={VS,TC,TE,GS,FS,CS};
    for(int i=0;i<NUM_OF_SHADER_TYPES;i++) {
        it=shaders.find(types[i]);
        if(it!=shaders.end())
            m_shaders[i]=it->second;
    }

    m_separable=false;
}

unsigned Program::CompileAndLink(string& log) const
{
    vector<GLuint> shaders;
    ostringstream sLog;
    
    GLuint programId=glCreateProgram();
    
    GLint res=1;
    GLenum shaderTypes[NUM_OF_SHADER_TYPES]={GL_VERTEX_SHADER,
                                            GL_TESS_CONTROL_SHADER,
                                            GL_TESS_EVALUATION_SHADER,
                                            GL_GEOMETRY_SHADER,
                                            GL_FRAGMENT_SHADER,
                                            GL_COMPUTE_SHADER};
    for(int i=0;i<NUM_OF_SHADER_TYPES;i++) {
        if(m_shaders[i].src.size()>0) {
            shaders.push_back(glCreateShader(shaderTypes[i]));
            res&=CompileShader(shaders.back(), m_shaders[i], sLog);
            glAttachShader(programId, shaders.back());
        }
    }
    
    if(m_separable)
        glProgramParameteri(programId, GL_PROGRAM_SEPARABLE, GL_TRUE);

    glLinkProgram(programId);

    for(vector<GLuint>::const_iterator it=shaders.begin();it!=shaders.end();++it) {
        glDetachShader(programId, *it);
        glDeleteShader(*it);
    }
    
    GLint tmp;
    glGetProgramiv(programId, GL_LINK_STATUS, &tmp);
    res&=tmp;
    
    sLog<<"Status: Link "<<(res ? "successful" : "failed")<<endl;
    
    glGetProgramiv(programId, GL_INFO_LOG_LENGTH, &tmp);
    char* infoLog = new char[tmp];
    glGetProgramInfoLog(programId, tmp, &tmp, infoLog);
    sLog<<"Linkage details:"<<endl<<infoLog<<endl;
    delete[] infoLog;
    
    log=sLog.str();
    if(!res)
        throw "Errors in shader compilation";

    return programId;
}

int Program::CompileShader( unsigned shader, const Shader& shaderSrc, ostringstream& sLog ) const
{
    const char* strSrc=shaderSrc.src.c_str();
    glShaderSource(shader, 1, &strSrc, NULL);
    glCompileShader(shader);
    
    GLint tmp,res;
    glGetShaderiv(shader, GL_COMPILE_STATUS, &tmp);
    res=tmp;
    
    sLog<<"Status: "<<shaderSrc.name<<" shader compiled with"<<(tmp ? "out" : "")<<" errors"<<endl;
    glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &tmp);

    char* infoLog=new char[tmp];
    glGetShaderInfoLog(shader, tmp, &tmp, infoLog);
    sLog<<"Compilation details for "<<shaderSrc.name<<" shader:"<<endl<<infoLog<<endl;
    delete[] infoLog;

    return res;
}

Effect::Effect()
    : m_includes(0)
    , m_active(true)
{}

Effect::~Effect()
{
    for(map<string,Program*>::iterator it=m_programs.begin(); it!=m_programs.end(); ++it)
        delete it->second;
    for(map<string,Sampler*>::iterator it=m_samplers.begin(); it!=m_samplers.end(); ++it)
        delete it->second;
}

bool& Effect::Active()
{
    return m_active;
}

string& Effect::Dir()
{
    return m_dir;
}

unsigned Effect::BuildProgram(const string& prog, string& log) const
{
    map<string,Program*>::const_iterator it=m_programs.find(prog);
    if(it==m_programs.end())
        throw "Program not found";
    
    return it->second->CompileAndLink(log);
}

unsigned Effect::BuildProgram(const string& prog) const
{
    string trash;
    return BuildProgram(prog, trash);
}

ostringstream& Effect::Log()
{
    return m_log;
}

unsigned Effect::CreateSampler(const string& sampler) const
{
    map<string,Sampler*>::const_iterator it=m_samplers.find(sampler);
    if(it==m_samplers.end())
        throw "Sampler not found";

    return it->second->CreateSamplerObject();
}

const vector<string>& Effect::GetProgramList() const
{
    return m_programNames;
}

void Effect::PopulateProgramList()
{
    m_programNames.clear();
    for(map<string,Program*>::const_iterator it=m_programs.begin(); it!=m_programs.end(); ++it)
        m_programNames.push_back(it->first);
}

Sampler::Sampler()
{
    m_stringParams["WrapS"]="repeat";
    m_stringParams["WrapT"]="repeat";
    m_stringParams["WrapR"]="repeat";
    m_stringParams["MinFilter"]="trilinear";
    m_stringParams["MagFilter"]="linear";
    m_stringParams["Format"]="float";
    m_stringParams["Type"]="sampler";
    m_floatParams["MinLod"]=-1000;
    m_floatParams["MaxLod"]=1000;
    m_floatParams["LodBias"]=0;
    m_stringParams["CmpMode"]="none";
    m_stringParams["CmpFunc"]="lequal";
    m_intParams["Dim"]=2;
    m_intParams["Array"]=0;
    m_intParams["MS"]=0;
    m_intParams["Rect"]=0;
    m_intParams["Aniso"]=1;

    m_compareFuncs["lequal"]=GL_LEQUAL;
    m_compareFuncs["gequal"]=GL_GEQUAL;
    m_compareFuncs["less"]=GL_LESS;
    m_compareFuncs["greater"]=GL_GREATER;
    m_compareFuncs["equal"]=GL_EQUAL;
    m_compareFuncs["notequal"]=GL_NOTEQUAL;
    m_compareFuncs["always"]=GL_ALWAYS;
    m_compareFuncs["never"]=GL_NEVER;

    m_cmpModes["none"]=GL_NONE;
    m_cmpModes["ref"]=GL_COMPARE_REF_TO_TEXTURE;
    
    m_minFilters["point"]=GL_NEAREST;
    m_minFilters["linear"]=GL_LINEAR;
    m_minFilters["nearest"]=GL_NEAREST_MIPMAP_NEAREST;
    m_minFilters["bilinear"]=GL_NEAREST_MIPMAP_LINEAR;
    m_minFilters["trilinear"]=GL_LINEAR_MIPMAP_LINEAR;

    m_magFilters["nearest"]=GL_NEAREST;
    m_magFilters["point"]=GL_NEAREST;
    m_magFilters["linear"]=GL_LINEAR;
    m_magFilters["bilinear"]=GL_LINEAR;

    m_wrapModes["repeat"]=GL_REPEAT;
    m_wrapModes["mirroredRepeat"]=GL_MIRRORED_REPEAT;
    m_wrapModes["clampToEdge"]=GL_CLAMP_TO_EDGE;
    m_wrapModes["clampToBorder"]=GL_CLAMP_TO_BORDER;
}

void Sampler::SetParam(const string& param, float val)
{
    m_floatParams[param]=val;
}

void Sampler::SetParam(const string& param, unsigned val)
{
    if(param=="Rect" && val) {
        m_stringParams["MinFilter"]="linear";
        m_stringParams["WrapS"]="clampToEdge";
        m_stringParams["WrapT"]="clampToEdge";
        m_stringParams["WrapR"]="clampToEdge";
    }
    m_intParams[param]=val;
}

void Sampler::SetParam(const string& param, const string& val)
{
    if(param=="Dim")
        m_intParams["Dim"]=0;
    m_stringParams[param]=val;
}

string Sampler::Descriptor() const
{
    ostringstream dcl;
    bool isBuffer=false;

	const string& format = m_stringParams.find("Format")->second;

    if(format=="int")
        dcl<<'i';
    else if(format=="uint")
        dcl<<'u';
    else if(format!="float")
        throw "Unknown format type\n";

    dcl<<m_stringParams.find("Type")->second;

    if(m_intParams.find("Dim")->second)
        dcl<<m_intParams.find("Dim")->second<<'D';
    else {
        string dim(m_stringParams.find("Dim")->second);
        dcl<<dim;
        if(dim=="Buffer")
            isBuffer=true;
        else if(dim!="Cube")
            throw "Unknown type of sampler dimension\n";
    }

    if(m_intParams.find("Rect")->second) {
        if(m_intParams.find("Dim")->second!=2 || !m_intParams.find("Array")->second || !m_intParams.find("MS")->second)
            throw "Can't use Rect with current parameters\n";
        dcl<<"Rect";
    }

    if(m_intParams.find("MS")->second) {
        if(m_intParams.find("Dim")->second!=2)
            throw "Can't use MS with dimension other than 2\n";
        dcl<<"MS";
    }

    if(m_intParams.find("Array")->second) {
        if(m_intParams.find("Dim")->second==3 || isBuffer)
            throw "Can't use Array with dimension 3 or buffer\n";
        dcl<<"Array";
    }

    if(m_stringParams.find("CmpMode")->second=="ref") {
        if(isBuffer)
            throw "Can't use comparison with buffer\n";
        dcl<<"Shadow";
    }
    else if(m_stringParams.find("CmpMode")->second!="none")
        throw "Unknown compare mode\n";

    return dcl.str();
}

unsigned Sampler::CreateSamplerObject() const
{
    GLuint samplerObj;
    glGenSamplers(1, &samplerObj);
    glSamplerParameteri(samplerObj, GL_TEXTURE_MIN_FILTER, m_minFilters.find(m_stringParams.find("MinFilter")->second)->second);
    glSamplerParameteri(samplerObj, GL_TEXTURE_MAG_FILTER, m_magFilters.find(m_stringParams.find("MagFilter")->second)->second);
    glSamplerParameteri(samplerObj, GL_TEXTURE_WRAP_S, m_wrapModes.find(m_stringParams.find("WrapS")->second)->second);
    glSamplerParameteri(samplerObj, GL_TEXTURE_WRAP_T, m_wrapModes.find(m_stringParams.find("WrapT")->second)->second);
    glSamplerParameteri(samplerObj, GL_TEXTURE_WRAP_R, m_wrapModes.find(m_stringParams.find("WrapR")->second)->second);
    glSamplerParameterf(samplerObj, GL_TEXTURE_MIN_LOD, m_floatParams.find("MinLod")->second);
    glSamplerParameterf(samplerObj, GL_TEXTURE_MAX_LOD, m_floatParams.find("MaxLod")->second);
    glSamplerParameterf(samplerObj, GL_TEXTURE_LOD_BIAS, m_floatParams.find("LodBias")->second);
    glSamplerParameteri(samplerObj, GL_TEXTURE_COMPARE_MODE, m_cmpModes.find(m_stringParams.find("CmpMode")->second)->second);
    glSamplerParameteri(samplerObj, GL_TEXTURE_COMPARE_FUNC, m_compareFuncs.find(m_stringParams.find("CmpFunc")->second)->second);
    glSamplerParameteri(samplerObj, GL_TEXTURE_MAX_ANISOTROPY_EXT, m_intParams.find("Aniso")->second);

    return samplerObj;
}

vector<Effect*> gEffects;

} // glfxParser

using namespace glfxParser;

int GLFX_APIENTRY glfxGenEffect()
{
    gEffects.push_back(new Effect);
    return (int)gEffects.size()-1;
}

bool GLFX_APIENTRY glfxParseEffectFromFile( int effect, const char* file )
{
    bool retVal=true;
    
    fopen_s(&glfxin, file, "r");
    if(glfxin==NULL) {
        gEffects[effect]->Log()<<"Cannot open file "<<file<<endl;
        gEffects[effect]->Active()=false;
        return false;
    }
    try {
        //glfxdebug=1;
        gEffect=gEffects[effect];
        
        string fname(file);
        size_t lastSlash=fname.find_last_of('/')+1;
        size_t lastBackSlash=fname.find_last_of('\\')+1;
        lastSlash=max(lastSlash, lastBackSlash);
        gEffect->Dir()=fname.substr(0, lastSlash);

        glfxrestart(glfxin);
        glfxset_lineno(1);
        glfxparse();
    }
    catch(const char* err) {
        gEffect->Log()<<err<<endl;
        gEffect->Active()=false;
        retVal=false;
    }
    catch(const string& err) {
        gEffect->Log()<<err<<endl;
        gEffect->Active()=false;
        retVal=false;
    }
    catch(...) {
        gEffect->Log()<<"Unknown error occurred during parsing of "<<file<<endl;
        gEffect->Active()=false;
        retVal=false;
    }

    glfxpop_buffer_state();
    fclose(glfxin);

    gEffect->PopulateProgramList();
    return retVal;
}

bool GLFX_APIENTRY glfxParseEffectFromMemory( int effect, const char* src )
{
    bool retVal=true;
    try {
        gEffect=gEffects[effect];
        gEffect->Dir()="";
        glfx_scan_string(src);
        glfxset_lineno(1);
        glfxparse();
    }
    catch(const char* err) {
        gEffect->Log()<<err<<endl;
        gEffect->Active()=false;
        retVal=false;
    }
    catch(const string& err) {
        gEffect->Log()<<err<<endl;
        gEffect->Active()=false;
        retVal=false;
    }
    catch(...) {
        gEffect->Log()<<"Unknown error occurred during parsing of source"<<endl;
        gEffect->Active()=false;
        retVal=false;
    }

    glfxpop_buffer_state();

    gEffect->PopulateProgramList();
    return retVal;
}

void GLFX_APIENTRY glfxDeleteEffect(int effect)
{
    if((size_t)effect<gEffects.size() && gEffects[effect]!=NULL) {
        if(gEffect==gEffects[effect])
            gEffect=NULL;
        delete gEffects[effect];
        gEffects[effect]=NULL;
    }
}

void GLFX_APIENTRY glfxGetEffectLog(int effect, char* log, int bufSize)
{
    if((size_t)effect>=gEffects.size() || gEffects[effect]==NULL)
        return;

    if(!strcpy_s(log, bufSize, gEffects[effect]->Log().str().c_str()))
        gEffects[effect]->Log().str("");
}

const char* GLFX_APIENTRY glfxGetEffectLog(int effect)
{
    if((size_t)effect>=gEffects.size() || gEffects[effect]==NULL)
        return "";

    static string log=gEffects[effect]->Log().str();
    gEffects[effect]->Log().str("");
    return log.c_str();
}

int GLFX_APIENTRY glfxGetProgramCount(int effect)
{
    return (int)gEffects[effect]->GetProgramList().size();
}

void GLFX_APIENTRY glfxGetProgramName(int effect, int program, char* name, int bufSize)
{
    const vector<string>& tmpList = gEffects[effect]->GetProgramList();
    if(program > (int)tmpList.size())
        return;
    strcpy_s(name, bufSize, tmpList[program].c_str());
}

const char* GLFX_APIENTRY glfxGetProgramName(int effect, int program)
{
    const vector<string>& tmpList = gEffects[effect]->GetProgramList();
    if(program > (int)tmpList.size())
        return "";
    return tmpList[program].c_str();
}

int GLFX_APIENTRY glfxCompileProgram(int effect, const char* program)
{
    if((size_t)effect>=gEffects.size() || gEffects[effect]==NULL || program==NULL || !gEffects[effect]->Active())
        return -1;

    string slog;
    unsigned progid;
    try {
        progid=gEffects[effect]->BuildProgram(program, slog);
    }
    catch(const char* err) {
        slog+=err;
        progid=-1;
    }
    catch(const string& err) {
        slog+=err;
        progid=-1;
    }
    catch(...) {
        slog+="Error during compilation";
        progid=-1;
    }

    gEffects[effect]->Log()<<slog;

    return progid;
}

int GLFX_APIENTRY glfxGenerateSampler(int effect, const char* sampler)
{
    if((size_t)effect>=gEffects.size() || gEffects[effect]==NULL || sampler==NULL || !gEffects[effect]->Active())
        return -1;

    string slog;
    unsigned sampId;
    try {
        sampId=gEffects[effect]->CreateSampler(sampler);
    }
    catch(const char* err) {
        slog+=err;
        sampId=-1;
    }

    gEffects[effect]->Log()<<slog;

    return sampId;
}
