#include <iostream>
using namespace std;

struct Employee {
    string name;
    float salary;
};

int main() {
    Employee e[3];

    for(int i=0;i<3;i++) {
        cout << "Enter Name: ";
        cin >> e[i].name;

        cout << "Enter Salary: ";
        cin >> e[i].salary;
    }

    cout << "\nEmployee Details:\n";

    for(int i=0;i<3;i++) {
        cout << e[i].name
             << " - "
             << e[i].salary << endl;
    }

    return 0;
}
