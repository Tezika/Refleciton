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

void Bazooka::shoot(){
    cout<<"Bazooka shoot!"<<endl;
}

IMPLEMENT_CLASS(Bazooka);