#include <iostream>
using namespace std;

struct Student {
    int marks;
};

int main() {
    Student s[3];
    int count = 0;

    for(int i=0;i<3;i++) {
        cin >> s[i].marks;
        if(s[i].marks > 50)
            count++;
    }

    cout << count;
    return 0;
}
