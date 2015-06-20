//
//  A.cpp
//  dylib_reflectorclasses
//
//  Created by TonyZefkia on 6/20/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#include "A.h"
A::A(){}
A::~A(){}

void A::outPrint(){
    printf("This is A!!!!\n");
}

IMPLEMENT_CLASS(A);