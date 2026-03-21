#include <iostream>
using namespace std;

struct Student {
    string name;
};

int main() {
    Student s[3];

    for(int i=0;i<3;i++) {
        cin >> s[i].name;
    }

    for(int i=0;i<3;i++) {
        cout << s[i].name << endl;
    }

    return 0;
}
