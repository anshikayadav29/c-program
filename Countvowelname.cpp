#include <iostream>
using namespace std;

struct Student {
    string name;
};

int main() {
    Student s;
    cin >> s.name;

    int count=0;
    for(char c : s.name) {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            count++;
    }

    cout << count;
    return 0;
}
