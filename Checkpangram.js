#include <iostream>
using namespace std;

int main(){
string s;
getline(cin,s);

bool visited[26]={false};

for(char c:s){
if(isalpha(c)){
c=tolower(c);
visited[c-'a']=true;
}
}

for(int i=0;i<26;i++){
if(!visited[i]){
cout<<"Not Pangram";
return 0;
}
}
cout<<"Pangram";
}
