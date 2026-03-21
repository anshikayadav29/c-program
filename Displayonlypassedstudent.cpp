#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {
    Student s[3];

    for(int i=0;i<3;i++) {
        cin >> s[i].name >> s[i].marks;
    }

    for(int i=0;i<3;i++) {
        if(s[i].marks >= 50)
            cout << s[i].name << endl;
    }

    return 0;
}
