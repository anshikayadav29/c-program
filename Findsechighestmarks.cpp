#include <iostream>
using namespace std;

struct Student {
    int marks;
};

int main() {
    Student s[3];

    for(int i=0;i<3;i++)
        cin >> s[i].marks;

    int max=0, second=0;

    for(int i=0;i<3;i++) {
        if(s[i].marks > max) {
            second = max;
            max = s[i].marks;
        }
        else if(s[i].marks > second && s[i].marks != max)
            second = s[i].marks;
    }

    cout << second;
    return 0;
}
