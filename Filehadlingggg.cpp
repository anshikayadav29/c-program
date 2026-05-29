#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("notes.txt");

    string note;

    cout << "Write Note: ";
    getline(cin, note);

    file << note;

    file.close();

    cout << "Saved Successfully";

    return 0;
}
