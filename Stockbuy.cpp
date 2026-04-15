#include <iostream>
using namespace std;

int main() {
    int prices[] = {7,1,5,3,6,4};
    int n = 6;

    int minPrice = prices[0], profit = 0;

    for(int i=1;i<n;i++) {
        if(prices[i] < minPrice) minPrice = prices[i];
        else profit = max(profit, prices[i] - minPrice);
    }

    cout << profit;
}
