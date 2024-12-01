#include <unordered_set>
#ifndef TEACHER_H
#include "teacher.h"
#endif
#ifndef STUDENT_H
#include "student.h"
#endif
#define COURSE_H

class Course {
public:
    Course();
    Course(size_t id);
    bool AddStudent(size_t student_id);
    bool RemoveStudent(size_t student_id);
    bool AddTeacher(size_t teacher_id);
    bool RemoveTeacher(size_t teacher_id);
    size_t GetId() const;
    void SetId(size_t new_id);

private:
    size_t id;
    unordered_set<size_t> students;
    unordered_set<size_t> teachers;
    unordered_set<size_t> assistants;
};
