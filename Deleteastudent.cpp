#include <iostream>
using namespace std;

struct Student {
    int id;
};

int main() {
    Student s[3];
    int pos;

    for(int i=0;i<3;i++) cin >> s[i].id;

    cin >> pos;

    for(int i=pos;i<2;i++)
        s[i] = s[i+1];

    for(int i=0;i<2;i++)
        cout << s[i].id << " ";

    return 0;
}
