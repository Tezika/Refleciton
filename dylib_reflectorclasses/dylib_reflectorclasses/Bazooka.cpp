//
//  Bazooka.cpp
//  dylib_reflectorclasses
//
//  Created by TonyZefkia on 6/22/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#include "Bazooka.h"


Bazooka::Bazooka(){};
Bazooka::~Bazooka(){};

void Bazooka::disWeaponName(){
    cout<<"This is a Bazooka!"<<endl;
}

IMPLEMENT_CLASS(Bazooka);