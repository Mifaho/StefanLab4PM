/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Email.h
 * Author: stefa_000
 *
 * Created on den 1 mars 2017, 15:23
 */

#ifndef EMAIL_H
#define EMAIL_H
#include <string>

class Email {
public:

    struct CompWhoDateSubject {

        bool operator()(const Email &lhs, const Email &rhs) {
            if (lhs.who != rhs.who) {
                return lhs.who < rhs.who;
            } else if (lhs.date != rhs.date) {
                return lhs.date < rhs.date;
            } else {
                return lhs.subject < rhs.subject;
            }
        };
    };

    struct CompDateWhoSubject {

        bool operator()(const Email &lhs, const Email &rhs) {
            if (lhs.date != rhs.date) {
                return lhs.date < rhs.date;
            } else if (lhs.who != rhs.who) {
                return lhs.who < rhs.who;
            } else {
                return lhs.subject < rhs.subject;
            }
        };
    };

    struct CompSubjectWhoDate {

        bool operator()(const Email &lhs, const Email &rhs) {
            if (lhs.subject != rhs.subject) {
                return lhs.subject < rhs.subject;
            } else if (lhs.who != rhs.who) {
                return lhs.who < rhs.who;
            } else {
                return lhs.date < rhs.date;
            }
        };
    };
    Email();
    Email(std::string who, std::string date, std::string subject);
    Email(const Email& orig);
    friend std::ostream& operator<<(std::ostream& output, const Email& email);
    virtual ~Email();
private:
    std::string who;
    std::string date;
    std::string subject;
};

#endif /* EMAIL_H */

