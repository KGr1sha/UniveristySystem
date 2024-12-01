#include <string>

#define USER_H

using namespace std;

class User {
public:
    User();
    User(size_t id, string first_name, string second_name, string last_name);
    size_t GetId() const;
    string GetName() const;

protected:
    size_t id;
    string first_name;
    string secont_name;
    string last_name;
};
