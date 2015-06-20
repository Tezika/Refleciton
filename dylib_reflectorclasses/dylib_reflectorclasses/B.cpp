//
//  B.cpp
//  dylib_reflectorclasses
//
//  Created by TonyZefkia on 6/20/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#include "B.h"



B::B(){};
B::~B(){};

void B::outPrint(){
    printf("This is B!!\n");
};

IMPLEMENT_CLASS(B);