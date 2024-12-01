#include "university_system.h"

UniversitySystem::UniversitySystem(const Journal& journal, const Schedule& schedule) {
    this->journal = journal;
    this->schedule = schedule;
}

size_t UniversitySystem::GenerateStudentId() {
    return ++last_student_id;
}
size_t UniversitySystem::GenerateTeacherId() {
    return ++last_teacher_id;
}
size_t UniversitySystem::GenerateCourseId() {
    return ++last_course_id;
}

void UniversitySystem::AddStudent(Student& student) {
    size_t new_id = GenerateStudentId();
    student.SetId(new_id);
    students.insert({new_id, student});
}
void UniversitySystem::AddTeacher(Teacher& teacher) {
    size_t new_id = GenerateTeacherId();
    teachers.insert({new_id, teacher});
}
void UniversitySystem::AddCourse(Course& course) {
    size_t new_id = GenerateCourseId();
    course.SetId(new_id);
    courses.insert({new_id, course});
}

Student UniversitySystem::GetStudent(size_t student_id) const {
    return students.at(student_id);
}
Teacher UniversitySystem::GetTeacher(size_t teacher_id) const {
    return teachers.at(teacher_id);
}
Course UniversitySystem::GetCourse(size_t course_id) const {
    return courses.at(course_id);
}
