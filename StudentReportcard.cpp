#include <iostream>
using namespace std;

int main() {
    string name;
    int marks[5];
    int total = 0;
    float percent;

    cout << "Enter Student Name: ";
    cin >> name;

    for(int i=0;i<5;i++) {
        cout << "Enter Marks " << i+1 << ": ";
        cin >> marks[i];

        total += marks[i];
    }

    percent = total / 5.0;

    cout << "\nTotal: " << total;
    cout << "\nPercentage: " << percent;

    if(percent >= 90)
        cout << "\nGrade A";
    else if(percent >= 75)
        cout << "\nGrade B";
    else if(percent >= 50)
        cout << "\nGrade C";
    else
        cout << "\nFail";

    return 0;
}
