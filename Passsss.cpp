#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    string chars =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

    int length;
    string password = "";

    cout << "Enter Password Length: ";
    cin >> length;

    for(int i=0;i<length;i++) {
        password += chars[rand() % chars.length()];
    }

    cout << "Generated Password: " << password;

    return 0;
}
