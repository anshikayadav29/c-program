#include <iostream>
using namespace std;

void name(string first, string last = "Kumar") {
    cout << first << " " << last << endl;
}

int main() {
    name("Rahul");
    name("Aman", "Sharma");
}
