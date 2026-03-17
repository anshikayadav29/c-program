#include <iostream>
#include <string>
using namespace std;

int main(){
string s;
cin>>s;

string result="";

for(char c:s){
if(result.find(c)==string::npos)
result+=c;
}

cout<<result;
}
