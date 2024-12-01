#include <unordered_map>
#ifndef SCHEDULE_H
#include "schedule.h"
#endif
#ifndef JOURNAL_H
#include "journal.h"
#endif
#define UNIVERSITY_SYSTEM_H

class UniversitySystem {
public:
    void AddStudent(const Student&);
    void AddTeacher(const Teacher&);
    void AddCourse(const Course&);
    Student GetStudent(size_t id);
    Teacher GetTeacher(size_t id);
    Course GetCourse(size_t id);
private:
    Journal journal;
    Schedule schedule;
    unordered_map<size_t, Course> courses;
    unordered_map<size_t, Student> students;
    unordered_map<size_t, Teacher> teachers;

    size_t last_student_id = -1;
    size_t last_teacher_id = -1;
    size_t last_course_id = -1;

    size_t GenerateStudentId();
    size_t GenerateTeacherId();
    size_t GenerateCourseId();
};
