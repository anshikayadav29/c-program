#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows :";
    cin>>m;
    int n;
    cout<<"Enter number of cols :";
    cin>>n;
    for(int i=1;i<=m;i++){
        for (int i=1;i<=n;i++){
            cout<<"*";
        }
        cout<<endl;
    }
}