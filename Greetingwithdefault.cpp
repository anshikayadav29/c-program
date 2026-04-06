#include <iostream>
using namespace std;

void greet(string name, string city = "Delhi") {
    cout << name << " from " << city << endl;
}

int main() {
    greet("Anshika");
    greet("Ravi", "Mumbai");
}
