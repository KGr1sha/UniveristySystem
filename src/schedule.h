#include <algorithm>
#include <unordered_map>
#ifndef TEACHER_H
#include "teacher.h"
#endif
#ifndef COURSE_H
#include "course.h"
#endif
#define SCHEDULE_H

enum ScheduleEntryType {
    Lecture,
    Seminar,
    Practice
};

struct Timestamp {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;

    bool operator==(const Timestamp &other) const {
        return year == other.year &&\
        month == other.month &&\
        day == other.day &&\
        hour == other.hour &&\
        minute == other.minute &&\
        second == other.second;
    }
};

template<>
struct std::hash<Timestamp> {
    size_t operator() (const Timestamp &ts) const {
        return hash<int>()(ts.year + ts.month + ts.day + ts.hour + ts.minute + ts.second);
    }
};

struct ScheduleEntry {
    ScheduleEntryType type;
    Teacher teacher;
    Course course;
};

class Schedule {
public:
    bool AddEntry(Timestamp, ScheduleEntry);
    bool RemoveEntry(Timestamp);
    bool UpdateEntry(Timestamp, ScheduleEntry);
    bool GetEntry(Timestamp) const;
private:
    unordered_map<Timestamp, ScheduleEntry> entries;
};
