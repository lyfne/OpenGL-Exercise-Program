//
//  Shader.hpp
//  OpenGL Exercise Program
//
//  Created by 林逸凡 on 2017/3/17.
//  Copyright © 2017年 Ivan.lin. All rights reserved.
//

#ifndef Shader_hpp
#define Shader_hpp

#include <GL/glew.h>

class Shader
{
public:
    GLuint Program;
    // 构造器读取并构建着色器
    Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
    // 使用程序
    void Use();
};

#endif /* Shader_hpp */
