/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Email.cpp
 * Author: stefa_000
 * 
 * Created on den 1 mars 2017, 15:23
 */

#include "Email.h"
#include <sstream>

Email::Email() {
}

Email::Email(std::string who, std::string date, std::string subject):
who(who), date(date), subject(subject) {
}

Email::Email(const Email& orig) {
}

std::ostream& operator<<(std::ostream& output, const Email& email) {
    output << email.who << ", " << email.date << ", " << email.subject;
}

Email::~Email() {
}

