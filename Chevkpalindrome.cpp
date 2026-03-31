#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,2,1};
    int* start = arr;
    int* end = arr + 4;
    bool flag = true;

    while(start < end) {
        if(*start != *end) {
            flag = false;
            break;
        }
        start++;
        end--;
    }

    if(flag)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
