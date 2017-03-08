/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MailBox.h
 * Author: stefa_000
 *
 * Created on den 1 mars 2017, 16:09
 */

#ifndef MAILBOX_H
#define MAILBOX_H
#include "Email.h"

class MailBox {
public:
    void SortWho() {
        Email::CompWhoDateSubject comp;
        std::sort(this->emails.begin(), this->emails.end(), comp);
    };

    void SortDate(/*const MailBox& mailbox*/) {
        Email::CompDateWhoSubject comp;
        std::sort(this->emails.begin(), this->emails.end(), comp);
    };

    void SortSubject() {
        Email::CompSubjectWhoDate comp;
        std::sort(this->emails.begin(), this->emails.end(), comp);
    };
    MailBox();
    MailBox(size_t size);
    MailBox(std::vector<Email> emails);
    Email* begin();
    Email* end();
    void addEmailAtEnd(Email email);
    Email getEmailAtIndex(Email email, size_t index);
    Email setEmailAtIndex(Email email, size_t index);
    Email removeEmailAtEnd(Email email);
    void insertElementAtIndex(Email email, size_t index);
    virtual ~MailBox();
private:
    std::vector<Email> emails;
};

#endif /* MAILBOX_H */

