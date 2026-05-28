#include <iostream>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    Contact c[5];

    for(int i=0;i<2;i++) {
        cout << "Enter Name: ";
        cin >> c[i].name;

        cout << "Enter Phone: ";
        cin >> c[i].phone;
    }

    cout << "\nContacts:\n";

    for(int i=0;i<2;i++) {
        cout << c[i].name << " - "
             << c[i].phone << endl;
    }

    return 0;
}
