#include <iostream>
#include <string>
using namespace std;

int main(){
string s;
getline(cin,s);

string word="";
for(int i=0;i<=s.length();i++){
if(s[i]==' ' || i==s.length()){
for(int j=word.length()-1;j>=0;j--)
cout<<word[j];
cout<<" ";
word="";
}else{
word+=s[i];
}
}
}
