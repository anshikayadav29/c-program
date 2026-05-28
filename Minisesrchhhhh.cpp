#include <iostream>
using namespace std;

int main() {
    string data[] = {
        "C++ Tutorial",
        "DSA Course",
        "Java Notes",
        "Python Guide"
    };

    string keyword;

    cout << "Search: ";
    cin >> keyword;

    cout << "\nResults:\n";

    for(int i=0;i<4;i++) {
        if(data[i].find(keyword) != string::npos)
            cout << data[i] << endl;
    }

    return 0;
}
