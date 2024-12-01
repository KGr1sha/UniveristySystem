#ifndef USER_H
#include "user.h"
#endif
#define STUDENT_H

class Student : public User {
public:
    Student();
    Student(
        size_t id,
        string first_name,
        string second_name,
        string last_name,
        string group
    );
    string GetGroup() const;
private:
    string group;
};

