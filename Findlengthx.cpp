#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello";
    char* p = str;
    int len = 0;

    while(*p != '\0') {
        len++;
        p++;
    }

    cout << "Length = " << len;
    return 0;
}
