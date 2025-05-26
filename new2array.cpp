#include<iostream>
using namespace std;
int main (){
    int arr[3] ={1,2,3};
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[0] =9;
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
}