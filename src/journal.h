#include <unordered_map>
#include <vector>
#ifndef STUDENT_H
#include "student.h"
#endif
#ifndef COURSE_H
#include "course.h"
#endif
#ifndef SCHEDULE_H
#include "schedule.h" // for Timestamp struct
#endif
#define JOURNAL_H

struct JournalEntry {
    Course course;
    uint grade;
    Timestamp date;

    JournalEntry(const Course& course, uint grade, const Timestamp& date) {
        this->course = course;
        this->grade = grade;
        this->date = date;
    }

    bool operator==(const JournalEntry &other) const {
        return course.GetId() == other.course.GetId() &&\
        grade == other.grade &&\
        date == other.date;
    }
};

class Journal {
public:
    void AddEntry(size_t student_id, JournalEntry);
    void RemoveEntry(size_t student_id, JournalEntry);
    vector<JournalEntry> GetEntries(size_t student_id) const;
private:
    unordered_map<size_t, vector<JournalEntry>> data;
};

