//
//  main.cpp
//  Reflection_2
//
//  Created by TonyZefkia on 6/18/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#include <iostream>
#include "TestClass.h"
//class A:public Object{
//    DECLARE_CLASS(A);
//public:
//    A(){cout<<"A construct"<<endl;};
//    ~A(){cout<<"A deconstruct"<<endl;};
//public:
//    virtual void outPrint(){
//        cout<<"A!!!!"<<endl;
//    }
//};
//IMPLEMENT_CLASS(A);
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    auto*  pTst = Object::createObject("Test");
    pTst->outPrint();
    delete pTst;
    return 0;
}
