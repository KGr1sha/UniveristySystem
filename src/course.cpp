#include "course.h"

Course::Course() {
    id = 0;
}

Course::Course(size_t id) {
    this->id = id;
}

size_t Course::GetId() const {
    return id;
}

void Course::SetId(size_t new_id) {
    id = new_id;
}

bool Course::AddStudent(size_t student_id) {
    if (students.count(student_id) != 0) {
        return false;
    }
    students.insert(student_id);
    return true;
}

