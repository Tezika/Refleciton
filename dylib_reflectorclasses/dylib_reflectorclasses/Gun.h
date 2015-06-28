//
//  Gun.h
//  dylib_reflectorclasses
//
//  Created by TonyZefkia on 6/22/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#ifndef __dylib_reflectorclasses__Gun__
#define __dylib_reflectorclasses__Gun__


#include "ReflectorObject.h"

NAME_CLASS(Gun)
{
    DECLARE_CLASS(Gun);
public:
    Gun();
    ~Gun();
public:
    virtual void shoot() override;
};
#endif /* defined(__dylib_reflectorclasses__Gun__) */
