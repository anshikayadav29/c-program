#include <iostream>
using namespace std;

int main() {
    char str[] = "C++";
    char* p = str;

    while(*p != '\0') {
        cout << *p;
        p++;
    }

    return 0;
}
