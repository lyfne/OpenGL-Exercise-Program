//
//  LessonCode.cpp
//  OpenGL Exercise Program
//
//  Created by 林逸凡 on 2017/3/20.
//  Copyright © 2017年 Ivan.lin. All rights reserved.
//

#include "LessonCode.hpp"

Lesson::Lesson()
{
    
}

Lesson::~Lesson()
{
    
}

void Lesson::loadLessonCode(int lessonNum)
{
    switch (lessonNum) {
        case 1:
            lessonCode1();
            break;
            
        default:
            break;
    }
}

void Lesson::lessonCode1()
{
    
}

