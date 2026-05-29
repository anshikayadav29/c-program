#include <iostream>
using namespace std;

int main() {
    int votes[2] = {0};
    int choice;

    for(int i=0;i<5;i++) {
        cout << "1.A\n2.B\nVote: ";
        cin >> choice;

        votes[choice-1]++;
    }

    cout << "\nA Votes: " << votes[0];
    cout << "\nB Votes: " << votes[1];

    return 0;
}
