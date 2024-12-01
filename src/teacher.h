#ifndef USER_H
#include "user.h"
#endif
#define TEACHER_H

class Teacher : public User {
public:
    Teacher();
    Teacher(
        size_t id,
        string first_name,
        string second_name,
        string last_name
    );
private:
};

