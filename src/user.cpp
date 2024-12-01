#include "user.h"

User::User() {
    id = 0;
    first_name = "";
    secont_name = "";
    last_name = "";
}

User::User(size_t id, string first_name, string secont_name, string last_name) {
    this->id = id;
    this->first_name = first_name;
    this->secont_name = secont_name;
    this->last_name = last_name;
}

size_t User::GetId() const {
    return id;
}

string User::GetName() const {
    return first_name + " " + secont_name + " " + last_name;
}
