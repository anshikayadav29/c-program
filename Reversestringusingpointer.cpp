#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello";
    char* start = str;
    char* end = str + 4;

    while(start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << str;
    return 0;
}
