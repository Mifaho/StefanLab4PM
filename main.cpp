/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: stefa_000
 *
 * Created on den 1 mars 2017, 15:13
 */
#include <iostream>
#include <cstdlib>
#include "Email.h"

/*
 * 
 */

int main(int argc, char** argv) {
    Email a("Anders", "2002-02-28", "lab 1");
    Email b("Anders", "2002-02-28", "lab 2");
    Email::CompWhoDateSubject comp;
        std::cout << "CompDateWhosubject" << std::endl;
    if(comp(a, b)){
        std::cout << "true" << std::endl;
    }
    else{
        std::cout << "false" << std::endl;
    }
    return 0;
}

