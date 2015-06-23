//
//  ReflectorObject.cpp
//  dylib_reflectorclasses
//
//  Created by TonyZefkia on 6/22/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#include "ReflectorObject.h"

static unordered_map<string, ClassInfo*>* s_infoMap = NULL;
IMPLEMENT_CLASS(Object);
ClassInfo::ClassInfo(){};
ClassInfo::~ClassInfo(){};
ClassInfo::ClassInfo(const string& name,objectCreator oc):m_className(name),m_creator(oc)
{
    Object::regisClass(this);
};


bool Object::regisClass(ClassInfo* ci){
    if (NULL==s_infoMap) {
        s_infoMap = new unordered_map<string, ClassInfo*>();
    }
    if(s_infoMap->find(ci->getClassName()) == s_infoMap->end()){
        s_infoMap->insert(std::unordered_map<string,ClassInfo*>::value_type(ci->getClassName(),ci));
    }
    return true;
}

Object* Object::createObject(const string& name){
    if (s_infoMap->find(name)!=s_infoMap->end()) {
        return s_infoMap->find(name)->second->getInstance();
    }else{
        return NULL;
    }
}


void Object::shoot(){};