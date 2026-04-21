#include <iostream>
using namespace std;

int main() {
    int prices[] = {7,1,5,3,6,4};
    int minPrice = prices[0], profit = 0;

    for(int i = 1; i < 6; i++) {
        minPrice = min(minPrice, prices[i]);
        profit = max(profit, prices[i] - minPrice);
    }
    cout << profit;
}
