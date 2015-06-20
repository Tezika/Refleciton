//
//  TestClass.h
//  Reflection_2
//
//  Created by TonyZefkia on 6/20/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#ifndef __Reflection_2__TestClass__
#define __Reflection_2__TestClass__

#include <stdio.h>
#include "ReflectionBase.h"
class Test:public Object{
    DECLARE_CLASS(Test);
public:
    Test();
    ~Test();
public:
    virtual void outPrint();
};
#endif /* defined(__Reflection_2__TestClass__) */
