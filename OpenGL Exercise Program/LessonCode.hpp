//
//  LessonCode.hpp
//  OpenGL Exercise Program
//
//  Created by 林逸凡 on 2017/3/20.
//  Copyright © 2017年 Ivan.lin. All rights reserved.
//

#ifndef LessonCode_hpp
#define LessonCode_hpp

#include <stdio.h>

class Lesson
{
public:
    Lesson();
    ~Lesson();
    
    void loadLessonCode(int lessonNum);
private:
    void lessonCode1();
};

#endif /* LessonCode_hpp */
