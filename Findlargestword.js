#include <iostream>
#include <string>
using namespace std;

int main(){
string s;
getline(cin,s);

string word="",largest="";
for(char c:s){
if(c!=' ')
word+=c;
else{
if(word.length()>largest.length())
largest=word;
word="";
}
}
cout<<largest;
}
