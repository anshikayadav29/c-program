#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    int h=0, m=0, s=0;

    while(true) {
        system("cls");

        cout << h << ":" << m << ":" << s;

        Sleep(1000);
        s++;

        if(s==60) {
            s=0;
            m++;
        }

        if(m==60) {
            m=0;
            h++;
        }

        if(h==24)
            h=0;
    }
}
