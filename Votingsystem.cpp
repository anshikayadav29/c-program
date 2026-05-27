#include <iostream>
using namespace std;

int main() {
    int votes[3] = {0};

    int choice;

    do {
        cout << "\n1. Candidate A";
        cout << "\n2. Candidate B";
        cout << "\n3. Candidate C";
        cout << "\n4. Result";
        cout << "\nChoice: ";
        cin >> choice;

        if(choice >=1 && choice <=3)
            votes[choice-1]++;

    } while(choice != 4);

    cout << "\nA: " << votes[0];
    cout << "\nB: " << votes[1];
    cout << "\nC: " << votes[2];

    return 0;
}
