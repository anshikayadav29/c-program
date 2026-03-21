#include <iostream>
using namespace std;

struct Student {
    int marks;
};

int main() {
    Student s[3];
    int minMarks;

    for(int i=0;i<3;i++) {
        cin >> s[i].marks;
        if(i==0 || s[i].marks < minMarks)
            minMarks = s[i].marks;
    }

    cout << minMarks;
    return 0;
}
