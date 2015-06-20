//
//  TestClass.cpp
//  Reflection_2
//
//  Created by TonyZefkia on 6/20/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#include "TestClass.h"

Test::Test(){};
Test::~Test(){};

void Test::outPrint(){
    printf("Test!!!\n");
}

IMPLEMENT_CLASS(Test);