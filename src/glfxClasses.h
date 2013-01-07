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


#pragma once

#include <map>
#include <string>
#include <sstream>
#include <vector>

int glfxparse();
int glfxlex();

namespace glfxParser {

using namespace std;

enum ShaderType {
    VS,
    TC,
    TE,
    GS,
    FS,
    CS,
    NUM_OF_SHADER_TYPES
};

class Program {
public:
    struct Shader {
        string  name;
        string  src;
    };

    Program(const map<ShaderType, Shader>& shaders);
    unsigned CompileAndLink(string& log) const;
        
private:
    int CompileShader(unsigned shader, const Shader& shaderSrc, ostringstream& sLog) const;

    Shader  m_shaders[NUM_OF_SHADER_TYPES];
    bool    m_separable;

    friend int ::glfxparse();
};

class Sampler {
    map<string, string>     m_stringParams;
    map<string, unsigned>   m_intParams;
    map<string, float>      m_floatParams;

    map<string, unsigned>   m_cmpModes;
    map<string, unsigned>   m_compareFuncs;
    map<string, unsigned>   m_minFilters;
    map<string, unsigned>   m_magFilters;
    map<string, unsigned>   m_wrapModes;

public:
    Sampler();
    string Descriptor() const;
    void SetParam(const string& param, const string& val);
    void SetParam(const string& param, unsigned val);
    void SetParam(const string& param, float val);
    unsigned CreateSamplerObject() const;
};

class Effect {
    map<string, Program*>   m_programs;
    vector<string>          m_programNames;
    map<string, Sampler*>   m_samplers;
    map<string, string>     m_shaders;
    struct InterfaceDcl {
        string id;
        int atLine;

        InterfaceDcl(string s, int l) : id(s), atLine(l) {}
        InterfaceDcl() {}
    };
    map<string, InterfaceDcl>   m_interfaces;
    ostringstream               m_sharedCode;
    ostringstream               m_log;
    int                         m_includes;
    bool                        m_active;
    string                      m_dir;
    
public:
    ostringstream& Log();
    unsigned BuildProgram(const string& prog, string& log) const;
    unsigned BuildProgram(const string& prog) const;
    unsigned CreateSampler(const string& sampler) const;
    const vector<string>& GetProgramList() const;
    void PopulateProgramList();
    bool& Active();
    string& Dir();
    ~Effect();
    Effect();

    friend int ::glfxparse();
    friend int ::glfxlex();
};

extern Effect *gEffect;

} // glfxParser
