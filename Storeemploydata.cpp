#include <iostream>
using namespace std;

struct Employee {
    string name;
    int salary;
};

int main() {
    Employee e;
    cin >> e.name >> e.salary;

    cout << e.name << " " << e.salary;
    return 0;
}
