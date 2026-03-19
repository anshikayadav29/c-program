#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
};

int main() {
    Student s;
    s.id = 1;
    s.name = "Anshika";

    cout << s.id << " " << s.name;
}
