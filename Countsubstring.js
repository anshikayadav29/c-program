#include <iostream>
using namespace std;

int main(){
string s="abababa";
string sub="aba";

int count=0;

for(int i=0;i<=s.length()-sub.length();i++){
if(s.substr(i,sub.length())==sub)
count++;
}

cout<<count;
}
