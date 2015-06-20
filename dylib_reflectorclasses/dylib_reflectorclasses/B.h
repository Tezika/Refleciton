//
//  B.h
//  dylib_reflectorclasses
//
//  Created by TonyZefkia on 6/20/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#ifndef __dylib_reflectorclasses__B__
#define __dylib_reflectorclasses__B__

#include <stdio.h>
#include "Reflector.h"

class B:public Object{
    DECLARE_CLASS(B);
public:
    B();
    ~B();
public:
    virtual void outPrint();
};

#endif /* defined(__dylib_reflectorclasses__B__) */
