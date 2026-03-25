#include <iostream>
using namespace std;

struct Student {
    string name;
};

int main() {
    Student s;
    int choice;

    cin >> choice;

    if(choice == 1) {
        cin >> s.name;
        cout << s.name;
    }
    else {
        cout << "Invalid";
    }

    return 0;
}#include <iostream>
using namespace std;

struct Student {
    string name;
};

int main() {
    Student s;
    int choice;

    cin >> choice;

    if(choice == 1) {
        cin >> s.name;
        cout << s.name;
    }
    else {
        cout << "Invalid";
    }

    return 0;
}
