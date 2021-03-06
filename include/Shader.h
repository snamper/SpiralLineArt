#ifndef __SHADER_H_
#define __SHADER_H_

#ifdef DARWIN
    #include <OpenGL/gl3.h>
#else
    #include <GL/glew.h>
    #ifndef WIN32
        #include <GL/gl.h>
    #endif
#endif


#include <iostream>
#include <glm/glm.hpp>
#include <string>

class Shader{
public:
   Shader(std::string _path, GLenum _type);
   virtual ~Shader();
   GLuint getShaderID();
private:
   GLuint m_shaderID;
};

#endif
