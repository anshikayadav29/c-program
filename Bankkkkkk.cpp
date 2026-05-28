#include <iostream>
using namespace std;

class Bank {
    double balance = 1000;

public:
    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if(amount > balance)
            cout << "Insufficient Balance\n";
        else
            balance -= amount;
    }

    void show() {
        cout << "Balance: " << balance;
    }
};

int main() {
    Bank b;

    b.deposit(500);
    b.withdraw(200);

    b.show();

    return 0;
}
