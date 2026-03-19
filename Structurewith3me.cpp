#include <iostream>
using namespace std;

struct Book {
    string name;
    int price;
    int pages;
};

int main() {
    Book b;
    b.name = "C++";
    b.price = 500;
    b.pages = 300;

    cout << b.name << " " << b.price << " " << b.pages;
    return 0;
}
