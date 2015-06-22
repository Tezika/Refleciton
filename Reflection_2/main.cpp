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


const char* FILE_PATH = "/Users/Tezika/Projects/CodingLearn/Reflection_2/Reflection_2/Test.txt";
void readCofigFile();
void disWeaponInfo(string str);

void readCofigFile(){
    ifstream ifs(FILE_PATH,ios::in);
    string str_perLine;
    while (!ifs.eof()) {
        getline(ifs, str_perLine);
        disWeaponInfo(str_perLine);
    }
    ifs.close();
}

void disWeaponInfo(string str){
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    readCofigFile();
    return 0;
}
