#include <iostream>
using namespace std;

void welcome(string name, string role = "User") {
    cout << "Welcome " << name << " (" << role << ")";
}

int main() {
    welcome("Anshika");
}
