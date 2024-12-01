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

bool Course::AddStudent(size_t student_id) {
    if (students.count(student_id) != 0) {
        return false;
    }
    students.insert(student_id);
    return true;
}

