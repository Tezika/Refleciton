//
//  OtherGun.cpp
//  dylib_reflectorclasses
//
//  Created by TonyZefkia on 6/28/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#include "OtherGun.h"
OtherGun::OtherGun(){};
OtherGun::~OtherGun(){};

void OtherGun::shoot(){
    cout<<"This is other Gun!"<<endl;
}

IMPLEMENT_CLASS(OtherGun);