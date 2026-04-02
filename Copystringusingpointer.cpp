#include <iostream>
using namespace std;

int main() {
    char str1[] = "Hello";
    char str2[10];

    char* p1 = str1;
    char* p2 = str2;

    while(*p1 != '\0') {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';

    cout << str2;
    return 0;
}
