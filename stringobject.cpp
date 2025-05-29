#include <iostream>
using namespace std;

int main() {
    string line;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    cout << "Enter a line of string: ";
    getline(cin, line);

    for (int i = 0; i < line.length(); ++i) {
        char ch = line[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            ++vowels;
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            ++consonants;
        else if (ch >= '0' && ch <= '9')
            ++digits;
        else if (ch == ' ')
            ++spaces;
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "White spaces: " << spaces << endl;

    return 0;
}