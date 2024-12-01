#include "university_system.h"

size_t UniversitySystem::GenerateStudentId() {
    return ++last_student_id;
}
size_t UniversitySystem::GenerateTeacherId() {
    return ++last_teacher_id;
}
size_t UniversitySystem::GenerateCourseId() {
    return ++last_course_id;
}

void UniversitySystem::AddStudent(const Student& student) {
    students.insert({GenerateStudentId(), student});
}
void UniversitySystem::AddTeacher(const Teacher& teacher) {
    teachers.insert({GenerateStudentId(), teacher});
}
void UniversitySystem::AddCourse(const Course& course) {
    courses.insert({GenerateStudentId(), course});
}

Student UniversitySystem::GetStudent(size_t student_id) {
    return students[student_id];
}
Teacher UniversitySystem::GetTeacher(size_t teacher_id) {
    return teachers[teacher_id];
}
Course UniversitySystem::GetCourse(size_t course_id) {
    return courses[course_id];
}
