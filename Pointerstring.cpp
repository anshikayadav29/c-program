#include <iostream>
using namespace std;

int main() {
    string name = "Anshika";
    string* ptr = &name;

    cout << *ptr << endl;

    return 0;
}
