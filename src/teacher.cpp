#include "teacher.h"

Teacher::Teacher() : User() {}

Teacher::Teacher(
    size_t id,
    string first_name,
    string second_name,
    string last_name
): User(id, first_name, second_name, last_name) {}
