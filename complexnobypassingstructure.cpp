#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

Complex add(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    Complex num1, num2, sum;

    cout << "Enter real and imaginary part of first complex number:\n";
    cin >> num1.real >> num1.imag;

    cout << "Enter real and imaginary part of second complex number:\n";
    cin >> num2.real >> num2.imag;

    sum = add(num1, num2);

    cout << "Sum = " << sum.real << " + " << sum.imag << "i" << endl;

    return 0;
}
