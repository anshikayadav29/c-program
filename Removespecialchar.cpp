#include <iostream>
#include <string>
using namespace std;

int main(){
string s;
getline(cin,s);

string result="";

for(char c:s)
if(isalnum(c))
result+=c;

cout<<result;
}
