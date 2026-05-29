#include <iostream>
using namespace std;

int main() {
    int rooms[5] = {0};
    int choice;

    while(true) {
        cout << "\n1.Book Room";
        cout << "\n2.View Rooms";
        cout << "\n3.Exit";
        cout << "\nChoice: ";
        cin >> choice;

        if(choice == 1) {
            int room;
            cout << "Enter Room Number (1-5): ";
            cin >> room;

            if(rooms[room-1] == 0) {
                rooms[room-1] = 1;
                cout << "Room Booked";
            } else {
                cout << "Already Booked";
            }
        }

        else if(choice == 2) {
            for(int i=0;i<5;i++) {
                cout << "Room " << i+1 << " : ";

                if(rooms[i] == 0)
                    cout << "Available\n";
                else
                    cout << "Booked\n";
            }
        }

        else
            break;
    }

    return 0;
}
