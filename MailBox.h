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
#include <vector>

class MailBox {
public:
    MailBox();
    MailBox(const MailBox& orig);
    virtual ~MailBox();
private:
    std::vector<Email> emails;
};

#endif /* MAILBOX_H */

