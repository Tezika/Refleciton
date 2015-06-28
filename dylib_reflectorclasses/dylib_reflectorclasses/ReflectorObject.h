//
//  ReflectorObject.h
//  dylib_reflectorclasses
//
//  Created by TonyZefkia on 6/22/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#ifndef __dylib_reflectorclasses__ReflectorObject__
#define __dylib_reflectorclasses__ReflectorObject__

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

#pragma GCC visibility push(default)

class Object;
class ClassInfo;

typedef Object* (*objectCreator)(void);


//使用这个宏来屏蔽命名带来的继承
#define NAME_CLASS(name)\
class name:public Object


#define DECLARE_CLASS(name) \
protected: \
static ClassInfo ms_classinfo; \
public:  \
virtual ClassInfo* getClassInfo() const; \
static Object* createObject();



#define IMPLEMENT_CLASS_COMMON(name,creator) \
ClassInfo name::ms_classinfo((#name), \
(objectCreator) creator); \
\
\
ClassInfo *name::getClassInfo() const \
{\
return &name::ms_classinfo;\
}



#define IMPLEMENT_CLASS(name)            \
IMPLEMENT_CLASS_COMMON(name,name::createObject) \
Object* name::createObject()                   \
{ return new name;}




//object  class
class Object{
    DECLARE_CLASS(Object);
public:
    Object(){};
    virtual ~Object(){};
    static bool regisClass(ClassInfo* ci);
    static Object* createObject(const string& name);
public:
    virtual void shoot();
};

//class's information
class ClassInfo{
public:
    ClassInfo();
    ClassInfo(const string& name, objectCreator oc);
    ~ClassInfo();
public:
    inline Object* getInstance() const {return  m_creator ? (*m_creator)():NULL;};
    inline  bool isDynamic() const {return NULL!=m_creator;};
    inline const string getClassName() const {return m_className;};
    inline const objectCreator getCreator() const {return m_creator;};
private:
    string m_className;
    objectCreator m_creator;
};

#pragma GCC visibility pop




#endif /* defined(__dylib_reflectorclasses__ReflectorObject__) */
