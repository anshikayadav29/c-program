#include <iostream>
using namespace std;

int main(){
char s[100];
cin>>s;

int count=0;

while(s[count]!='\0')
count++;

cout<<count;
}
