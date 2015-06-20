//
//  A.h
//  dylib_reflectorclasses
//
//  Created by TonyZefkia on 6/20/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#ifndef __dylib_reflectorclasses__A__
#define __dylib_reflectorclasses__A__


#include <stdio.h>
#include "Reflector.h"

class A:public Object{
  DECLARE_CLASS(A);
public:
    A();
    ~A();
public:
    virtual void outPrint();
};


#endif /* defined(__dylib_reflectorclasses__A__) */
