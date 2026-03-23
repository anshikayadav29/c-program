#include <iostream>
using namespace std;

struct Student {
    string name;
};

int main() {
    Student s;
    cin >> s.name;

    string rev = s.name;
    reverse(rev.begin(), rev.end());

    if(s.name == rev)
        cout << "Palindrome";
    else
        cout << "Not";

    return 0;
}
