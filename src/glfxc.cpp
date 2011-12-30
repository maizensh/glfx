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

#include <stdio.h>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glfx.h"

int main(int argc, char** argv) 
{
    int ret = 1;
    int effect;
    GLenum res;
    int window;
    
    if (argc != 3) {
        printf("Usage: %s <effect file> <program name>\n", argv[0]);
        goto error_exit;
    }
    
    glutInit(&argc, argv);

    window = glutCreateWindow("foo");
     
    res = glewInit();
    
    if (res != GLEW_OK) {
        printf("Error initializing glew: %s\n", glewGetErrorString(res));
        goto glew_error;
    }
    
    effect = glfxGenEffect();
    
    char log[10000];
    
    if (!glfxParseEffectFromFile(effect, argv[1])) {
        printf("Error creating effect:\n");
        glfxGetEffectLog(effect, log, sizeof(log));
        printf("%s\n", log);
        goto parse_error;
    }
    
    if (glfxCompileProgram(effect, argv[2]) < 0) {
        printf("Error compiling program '%s':\n", argv[2]);
        glfxGetEffectLog(effect, log, sizeof(log));
        printf("%s\n", log);
        goto compile_error;
    }
    
    printf("Compiled successfully\n");
             
    ret = 0;
    
compile_error:    
parse_error:
    glfxDeleteEffect(effect);

glew_error:    
    glutDestroyWindow(window);

error_exit:    
    return ret;
}

