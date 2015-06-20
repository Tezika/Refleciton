//
//  ReflectionBase.h
//  Reflection_2
//
//  Created by TonyZefkia on 6/18/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#ifndef __Reflection_2__ReflectionBase__
#define __Reflection_2__ReflectionBase__

#include <stdio.h>
#include <unordered_map>
#include <string>

using namespace std;

class Object;
class ClassInfo;

typedef Object* (*objectCreator)(void);



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
  { return new name();}




//object abstract class
class Object{
    DECLARE_CLASS(Object);
public:
    Object(){};
    virtual ~Object(){};
    static bool regisClass(ClassInfo* ci);
    static Object* createObject(const string& name);
public:
    virtual void outPrint();
};

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


#endif /* defined(__Reflection_2__ReflectionBase__) */
