#include <iostream>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";
    bool visited[26] = {false};

    for(char c : s) {
        visited[c - 'a'] = true;
    }

    bool isPangram = true;
    for(int i=0;i<26;i++) {
        if(!visited[i]) isPangram = false;
    }

    if(isPangram) cout<<"Pangram";
    else cout<<"Not";
}
