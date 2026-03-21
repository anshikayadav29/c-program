#include <iostream>
using namespace std;

struct Student {
    string name;
};

int main() {
    Student s[3];
    string longest = "";

    for(int i=0;i<3;i++) {
        cin >> s[i].name;
        if(s[i].name.length() > longest.length())
            longest = s[i].name;
    }

    cout << longest;
    return 0;
}
