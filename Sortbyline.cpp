#include <iostream>
using namespace std;

struct Student {
    string name;
};

int main() {
    Student s[3];

    for(int i=0;i<3;i++)
        cin >> s[i].name;

    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            if(s[j].name > s[j+1].name) {
                Student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    for(int i=0;i<3;i++)
        cout << s[i].name << endl;

    return 0;
}
