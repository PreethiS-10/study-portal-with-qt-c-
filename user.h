#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;

class User
{

private:
    string id;
    string password;
public:
    User():User("",""){}
    User(string id,string pass):id(id),password(pass){}
    string get_id()const
    {
        return id;
    }
    string get_password()const
    {
        return password;
    }
};

#endif // USER_H
