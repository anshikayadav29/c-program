#include<iostream>
using namespace std;
int main(){
    int length ,breadth;
    cout<<"Enter length of rectangle:";
    cin>>length;
    cout<<"Enter breadth of rectangle:";
    cin>>breadth;
    int area =length * breadth;
    int perimeter =2*(length + breadth);
    if (area>perimeter){
        cout<<"Area is greater than perimeter."<<endl;
    }else {
        cout<<"Area is not greater than perimeter."<<endl;
    
    }
    return 0;
}