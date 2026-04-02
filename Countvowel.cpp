#include <iostream>
using namespace std;

int main() {
    char str[] = "education";
    char* p = str;
    int count = 0;

    while(*p != '\0') {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
            count++;
        p++;
    }

    cout << "Vowels = " << count;
    return 0;
}
