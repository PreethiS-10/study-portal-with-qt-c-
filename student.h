#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;
#include "user.h"
class Student:public User
{
public:
    Student():Student("",""){}
    Student(string id,string password):User(id,password){}
    void serialize(std::ostream& out) const {
        out << this->get_id() << ' ' << this->get_password() << '\n';
    }
};

#endif // STUDENT_H
