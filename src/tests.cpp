#include <iostream>
#include "assert.h"
#include "university_system.h"

bool test(size_t test_id) {
    switch (test_id) {
        case 1: {
            User u1(0, "A", "B", "C");
            assert(u1.GetId() == 0);
            assert(u1.GetName() == "A B C");
        }
        break;

        case 2: {
            Student s1(1, "D", "E", "F", "BIV235");
            assert(s1.GetGroup() == "BIV235");
        }
        break;

        case 3: {
            Student s1(0, "A", "B", "C", "BOBA");
            Timestamp ts {
                2024, 11, 1, 19, 12, 0
            };
            JournalEntry entry(Course(0), 10, ts);
            Journal journal;
            journal.AddEntry(0, entry);
            auto entries = journal.GetEntries(0);
            assert(entries[0].grade == 10);
            assert(entries[0].date == ts);
            assert(entries[0].course.GetId() == 0);
        }
        break;
        case 4: {
            //shcedule test
        }
        break;
        case 5: {
            Journal journal;
            Schedule schedule;
            UniversitySystem uniSystem(journal, schedule); 
        }
        break;
        case 6: {
        }
        break;
        case 7: {
        }
        break;

        default:
            return false;
    }
    return true;
}

int main() {
    size_t cur_test = 1;
    while(test(cur_test)) {
        cout << "Test #" << cur_test << " passed" << endl;
        cur_test++;
    }
    cout << "ALL TESTS PASSED" <<endl;
}

