#ifndef STAFF_H
#define STAFF_H
#include <fstream>
#include "user.h"
class Staff:public User
{
public:
    Staff():Staff("",""){}
    Staff(std::string id,std::string password):User(id,password){}
};
#endif // STAFF_H
