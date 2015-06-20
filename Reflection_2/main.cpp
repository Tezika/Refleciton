//
//  main.cpp
//  Reflection_2
//
//  Created by TonyZefkia on 6/18/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#include <iostream>
#include "A.h"
#include "B.h"
#include "Reflector.h"
//#include "TestClass.h"
//#include "lib_reflcetor.h"
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
    auto  pTst = Object::createObject("B");
    auto  pTst2 = Object::createObject("A");
    pTst->outPrint();
    pTst2->outPrint();
    delete pTst;
    return 0;
}
