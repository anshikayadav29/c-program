#include <iostream>
using namespace std;

int main() {
    int seats[10] = {0};
    int choice;

    while(true) {
        cout << "\n1.Book Seat";
        cout << "\n2.View Seats";
        cout << "\n3.Exit";
        cout << "\nChoice: ";
        cin >> choice;

        if(choice == 1) {
            int seat;
            cout << "Enter Seat Number (1-10): ";
            cin >> seat;

            if(seats[seat-1] == 0) {
                seats[seat-1] = 1;
                cout << "Seat Booked";
            } else {
                cout << "Already Booked";
            }
        }

        else if(choice == 2) {
            for(int i=0;i<10;i++) {
                cout << "Seat " << i+1 << " : ";

                if(seats[i] == 0)
                    cout << "Empty\n";
                else
                    cout << "Booked\n";
            }
        }

        else
            break;
    }

    return 0;
}
