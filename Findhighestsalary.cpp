#include <iostream>
using namespace std;

struct Employee {
    int salary;
};

int main() {
    Employee e[3];
    int max = 0;

    for(int i=0;i<3;i++) {
        cin >> e[i].salary;
        if(e[i].salary > max)
            max = e[i].salary;
    }

    cout << max;
    return 0;
}
