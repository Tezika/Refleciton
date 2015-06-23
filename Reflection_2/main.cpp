//
//  main.cpp
//  Reflection_2
//
//  Created by TonyZefkia on 6/18/15.
//  Copyright (c) 2015 TonyZefkia. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "WeaponHeader.h"

const char* FILE_PATH = "/Users/Tezika/Projects/CodingLearn/Reflection_2/Test.txt";
const int   STR_SIZE  = 20;


void disWeaponInfo(char* str);
void readCofigFile();


void disWeaponInfo(char* str){
    //排除str为空的情况
    if(strlen(str)!=0){
        char* str_id = strtok(str, " ");
        char* str_name = strtok(NULL, " ");
        auto pWeapon = Object::createObject(str_name);
        //排除无法实例化类的情况
        if(pWeapon!=NULL){
            cout<<"ID: "<<str_id<<"\t"<<"Name: "<<pWeapon->getClassInfo()->getClassName()<<"\t";
            pWeapon->shoot();
            delete pWeapon;
        }else{
            return;
        }
    }
}

void readCofigFile(){
    //内存管理有问题
    ifstream ifs(FILE_PATH,ios::in);
    char *str_perLine = new char[STR_SIZE];
    while (!ifs.eof()) {
        ifs.getline(str_perLine, STR_SIZE,'\n');
        disWeaponInfo(str_perLine);
    }
    ifs.close();
    delete str_perLine;
    
}



int main(int argc, const char * argv[]) {
    readCofigFile();
    return 0;
}
