#include <iostream>
#include <string>
using namespace std;

int main(){
string s;
getline(cin,s);

int count=1;

for(char c:s)
if(c==' ')
count++;

cout<<count;
}
