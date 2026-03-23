#include <iostream>
using namespace std;

struct Student {
    int marks;
};

int main() {
    Student s[3];

    for(int i=0;i<3;i++)
        cin >> s[i].marks;

    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            if(s[j].marks > s[j+1].marks) {
                Student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    for(int i=0;i<3;i++)
        cout << s[i].marks << " ";

    return 0;
}
