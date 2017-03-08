/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MailBox.cpp
 * Author: stefa_000
 * 
 * Created on den 1 mars 2017, 16:09
 */

#include "MailBox.h"

MailBox::MailBox() {
}

MailBox::MailBox(size_t size) : emails(size) {
}

MailBox::MailBox(std::vector<Email> emails) : emails(emails) {
}

MailBox::~MailBox() {
}

Email* MailBox::begin() {
    return &(*(this->emails.begin()));
}

Email* MailBox::end() {
    return &(*(this->emails.end()));
}

void MailBox::addEmailAtEnd(Email email) {
    emails.push_back(email);
}

Email MailBox::removeEmailAtEnd(Email email) {
    Email tempemail = emails.at(0);
    emails.pop_back();
    return tempemail;
}

Email MailBox::getEmailAtIndex(Email email, size_t index) {
    return emails.at(index);
}

Email MailBox::setEmailAtIndex(Email email, size_t index) {
    emails[index] = email;
    return emails[index];
}

void MailBox::insertElementAtIndex(Email email, size_t index) {
    emails.insert(emails.begin() + index, email);
}



