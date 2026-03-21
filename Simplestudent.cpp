#include <iostream>
using namespace std;

struct Student {
    int marks;
};

int main() {
    Student s;
    cin >> s.marks;

    if(s.marks >= 50)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}
