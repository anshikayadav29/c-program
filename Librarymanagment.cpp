#include <iostream>
using namespace std;

class Library {
    string books[5] = {
        "C++",
        "Java",
        "Python",
        "DSA",
        "DBMS"
    };

public:
    void showBooks() {
        cout << "\nAvailable Books:\n";

        for(int i=0;i<5;i++)
            cout << i+1 << ". " << books[i] << endl;
    }

    void searchBook(string name) {
        bool found = false;

        for(int i=0;i<5;i++) {
            if(books[i] == name) {
                found = true;
                break;
            }
        }

        if(found)
            cout << "Book Found";
        else
            cout << "Book Not Found";
    }
};

int main() {
    Library l;
    l.showBooks();

    string name;
    cout << "\nEnter Book Name: ";
    cin >> name;

    l.searchBook(name);
}
