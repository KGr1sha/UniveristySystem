#include "schedule.h"

bool Schedule::AddEntry(Timestamp date, ScheduleEntry entry) {
    return entries.insert({date, entry}).second;
}

bool Schedule::RemoveEntry(Timestamp date) {
    return entries.erase(date) == 1;
}

bool Schedule::UpdateEntry(Timestamp date, ScheduleEntry entry) {
    if (entries.count(date) == 0) return false;
    entries[date] = entry;
    return true;
}
