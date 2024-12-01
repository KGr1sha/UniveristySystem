#include "user.h"
#include "assert.h"

int main() {
    User u1(0, "A", "B", "C");
    assert(u1.GetId() == 0);
    assert(u1.GetName() == "A B C");
    return 0;
}
