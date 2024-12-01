#include "journal.h"

void Journal::AddEntry(size_t student_id, JournalEntry entry) {
    data[student_id].push_back(entry);
}

void Journal::RemoveEntry(size_t student_id, JournalEntry entry) {
    vector<JournalEntry> entries = data[student_id];
    entries.erase(find(entries.begin(), entries.end(), entry));
}

vector<JournalEntry> Journal::GetEntries(size_t student_id) const {
    return data.at(student_id);
}
