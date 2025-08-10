#include <iostream>
#include <string>
using namespace std;
int main() {
    string str[5];
    cout << "Enter 5 words:\n";
    for (int i = 0; i < 5; i++)
        cin >> str[i];
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (str[i] > str[j])
                swap(str[i], str[j]);
        }
    }
    cout << "Sorted words:\n";
    for (int i = 0; i < 5; i++)
        cout << str[i] << endl;

    return 0;
}