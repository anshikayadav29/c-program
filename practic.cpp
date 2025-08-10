#include<iostream>
using namespace std;
int main(){
    int x =3,y,z;
    y =x =10;//Right to left
    z=x<10;
    cout<<x<<" "<<y<<" "<<z;
}