#include <iostream>
using namespace std;

struct Student {
    string name;
};

int main() {
    Student s;
    cin >> s.name;

    for(int i=s.name.length()-1;i>=0;i--)
        cout << s.name[i];

    return 0;
}
