#include "student.h"

Student::Student() : User() {}

Student::Student(
    size_t id,
    string first_name,
    string second_name,
    string last_name,
    string group
): User(id, first_name, second_name, last_name){ 
    this->group = group;
}

string Student::GetGroup() const {
    return group;
}

size_t Student::GetId() const {
    return id;
}

void Student::SetId(size_t new_id) {
    id = new_id;
}
