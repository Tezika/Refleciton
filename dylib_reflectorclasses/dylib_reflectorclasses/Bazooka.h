//
//  Bazooka.h
//  dylib_reflectorclasses
//
//  Created by TonyZefkia on 6/22/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#ifndef __dylib_reflectorclasses__Bazooka__
#define __dylib_reflectorclasses__Bazooka__

#include "ReflectorObject.h"

class Bazooka:public Object{
    DECLARE_CLASS(Bazooka);
public:
    Bazooka();
    ~Bazooka();
public:
    virtual void disWeaponName() override;
};

#endif /* defined(__dylib_reflectorclasses__Bazooka__) */
