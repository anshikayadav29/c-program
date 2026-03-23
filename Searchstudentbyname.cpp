#include <iostream>
using namespace std;

struct Student {
    string name;
};

int main() {
    Student s[3];
    string key;
    
    for(int i=0;i<3;i++)
        cin >> s[i].name;

    cin >> key;

    for(int i=0;i<3;i++) {
        if(s[i].name == key) {
            cout << "Found";
            return 0;
        }
    }

    cout << "Not Found";
    return 0;
}
