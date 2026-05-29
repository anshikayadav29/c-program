#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int otp = rand()%9000 + 1000;

    cout << "Your OTP: " << otp;

    return 0;
}
