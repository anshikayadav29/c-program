#include <iostream>
using namespace std;

int main() {
    string items[] = {"Shoes", "Watch", "Bag"};
    int price[] = {2000, 1500, 1000};

    int choice, total = 0;

    do {
        cout << "\n1.Shoes - 2000";
        cout << "\n2.Watch - 1500";
        cout << "\n3.Bag - 1000";
        cout << "\n4.Exit";
        cout << "\nChoose: ";

        cin >> choice;

        if(choice >=1 && choice <=3)
            total += price[choice-1];

    } while(choice != 4);

    cout << "\nTotal Bill: " << total;

    return 0;
}
