//
//  TommyGun.h
//  dylib_reflectorclasses
//
//  Created by TonyZefkia on 6/22/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#ifndef __dylib_reflectorclasses__TommyGun__
#define __dylib_reflectorclasses__TommyGun__

#include "ReflectorObject.h"

NAME_CLASS(TommyGun){
    DECLARE_CLASS(TommyGun);
public:
    TommyGun();
    ~TommyGun();
public:
    virtual void  shoot() override;
    
};


#endif /* defined(__dylib_reflectorclasses__TommyGun__) */
