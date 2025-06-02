#include <iostream>
#include <fstream>
using namespace std;

string encrypt(string text, int shift) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += char((c - base + shift) % 26 + base);
        } else result += c;
    }
    return result;
}

int main() {
    string input;
    ifstream in("input.txt");
    getline(in, input);
    in.close();

    string encrypted = encrypt(input, 3);
    ofstream out("encrypted.txt");
    out << encrypted;
    out.close();

    cout << "Encrypted text saved to file.\n";
    return 0;
}