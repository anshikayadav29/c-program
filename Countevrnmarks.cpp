#include <iostream>
using namespace std;

struct Student {
    int marks;
};

int main() {
    Student s[5];
    int count = 0;

    for(int i=0;i<5;i++) {
        cin >> s[i].marks;
        if(s[i].marks % 2 == 0)
            count++;
    }

    cout << count;
    return 0;
}
