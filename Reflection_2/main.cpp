//
//  main.cpp
//  Reflection_2
//
//  Created by TonyZefkia on 6/18/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#include <iostream>
#include "WeaponHeader.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    auto  pTst = Object::createObject("Bazooka");
    pTst->disWeaponName();
   // pTst->getId();
    delete pTst;
    return 0;
}
