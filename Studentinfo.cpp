#include <iostream>
using namespace std;

void student(string name, int age = 18) {
    cout << name << " " << age << endl;
}

int main() {
    student("Riya");
    student("Aman", 20);
}
