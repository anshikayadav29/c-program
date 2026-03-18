#include <iostream>
using namespace std;

int main(){
string s;
cin>>s;

string temp="";

for(char c:s){
if(isalnum(c))
temp+=tolower(c);
}

string rev=temp;
reverse(rev.begin(),rev.end());

if(temp==rev)
cout<<"Valid";
else
cout<<"Invalid";
}
