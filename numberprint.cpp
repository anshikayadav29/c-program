#include<iostream>
using namespace std;
void print (int n){
    if(n==11) return;
    cout<<n<<endl;
    print(n+1);
}
int main(){
print(1);
}