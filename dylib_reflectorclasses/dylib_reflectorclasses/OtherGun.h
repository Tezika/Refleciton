//
//  OtherGun.h
//  dylib_reflectorclasses
//
//  Created by TonyZefkia on 6/28/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#ifndef __dylib_reflectorclasses__OtherGun__
#define __dylib_reflectorclasses__OtherGun__

#include "ReflectorObject.h"

NAME_CLASS(OtherGun){
    DECLARE_CLASS(OtherGun);
public:
    OtherGun();
    ~OtherGun();
public:
    virtual void  shoot() override;
    
};


#endif /* defined(__dylib_reflectorclasses__OtherGun__) */
