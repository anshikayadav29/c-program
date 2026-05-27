#include <iostream>
using namespace std;

int main() {
    int overs, runs = 0;

    cout << "Enter Overs: ";
    cin >> overs;

    for(int i=1;i<=overs*6;i++) {
        int run;

        cout << "Ball " << i << ": ";
        cin >> run;

        runs += run;
    }

    cout << "\nTotal Score: " << runs;

    return 0;
}
