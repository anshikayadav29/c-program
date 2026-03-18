#include <iostream>
using namespace std;

int main(){
string s;
cin>>s;

char ch='a';

string result="";

for(char c:s)
if(c!=ch)
result+=c;

cout<<result;
}
