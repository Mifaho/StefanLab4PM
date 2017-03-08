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
#include "MailBox.h"


void Show(MailBox mailbox){
    for(auto element : mailbox){
        std::cout << element << std::endl;
    }
}



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
    //Testing MailBox
    MailBox mailbox(5);
    mailbox.setEmailAtIndex(Email("Pelle", "2002-02-28", "lab 3"), 1);
    mailbox.setEmailAtIndex(Email("Anders", "2002-02-27", "lab 3: hej"), 2);
    mailbox.setEmailAtIndex(Email("Kalle", "2002-02-25", "lab 3"), 3);
    mailbox.setEmailAtIndex(Email("Anders", "2002-02-26", "lab 2"), 4);
    mailbox.SortWho();
    std::cout << "sorted using SortWho" << std::endl;
    Show(mailbox);
    mailbox.SortDate();
    std::cout << "sorted using SortDate" << std::endl;
    Show(mailbox);
    mailbox.SortSubject();
    std::cout << "sorted using SortSubject" << std::endl;
    Show(mailbox);
    return 0;
}

