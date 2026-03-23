#include <iostream>
using namespace std;

struct Student {
    string name;
};

int main() {
    Student s[3];
    int count = 0;

    for(int i=0;i<3;i++)
        cin >> s[i].name;

    for(int i=0;i<3;i++) {
        for(int j=i+1;j<3;j++) {
            if(s[i].name == s[j].name)
                count++;
        }
    }

    cout << count;
    return 0;
}
