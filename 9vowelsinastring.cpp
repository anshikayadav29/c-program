#include<iostream>
using namespace std;

int main(){
    string s = "cow is an animal with four legs";
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }
    }
    cout << "Number of vowels: " << count << endl;
    return 0;
}