#include <iostream>
using namespace std;

int main(){
string s;
cin>>s;

int n=s.length();
int maxLen=1,start=0;

for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
string sub=s.substr(i,j-i+1);
string rev=sub;
reverse(rev.begin(),rev.end());

if(sub==rev && sub.length()>maxLen){
maxLen=sub.length();
start=i;
}
}
}
cout<<s.substr(start,maxLen);
}
