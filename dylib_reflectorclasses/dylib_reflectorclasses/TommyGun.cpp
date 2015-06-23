//
//  TommyGun.cpp
//  dylib_reflectorclasses
//
//  Created by TonyZefkia on 6/22/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#include "TommyGun.h"


#include "TommyGun.h"


TommyGun::TommyGun(){};
TommyGun::~TommyGun(){};

void TommyGun::shoot(){
    cout<<"TommyGun shoot!"<<endl;
}

IMPLEMENT_CLASS(TommyGun);