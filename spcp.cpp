#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter cost price :";
    cin>>cp;
    int sp;
    cout<<"enter selling price :";
    cin>>sp;
    if(sp>cp){
        cout<<"profit";
    }
    if(sp<cp){//cp>sp
        cout<<"loss";
    }
    if(sp==cp){
        cout<<"no profit no loss";
    }
}