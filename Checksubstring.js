#include <iostream>
#include <string>
using namespace std;

int main(){
string s="HelloWorld";
string sub="World";

if(s.find(sub)!=string::npos)
cout<<"Found";
else
cout<<"Not Found";
}
