#include<iostream>
using namespace std;
int main (){
    int arr[] ={12,6,7,34,9,23,2,8,3,6,11};
    int n =sizeof(arr)/4;
    int sum =0;
    for(int i=0;i<n;i++){
    sum +=arr[i];
}
cout<<sum;
}