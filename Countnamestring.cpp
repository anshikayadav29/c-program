#include <iostream>
using namespace std;

struct Student {
    string name;
};

int main() {
    Student s[3];
    int count = 0;

    for(int i=0;i<3;i++) {
        cin >> s[i].name;
        if(s[i].name[0] == 'A')
            count++;
    }

    cout << count;
    return 0;
}
