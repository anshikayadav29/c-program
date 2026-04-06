#include <iostream>
using namespace std;

void login(string user = "Guest") {
    cout << "Welcome " << user;
}

int main() {
    login();
}
