/*Print the sum, difference and product of two complex numbers by creating a class named 'Complex' with separate functions for each operation whose real and imaginary parts are entered by the user.*/

#include <bits/stdc++.h>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;
public:
    void setComplex(int r, int i) {
        real = r;
        imaginary = i;
    }
    int getreal() {
        return real;
    }
    int getimaginary(){
        return imaginary;
    }
    void sum(Complex num1) {
        int realsum = num1.getreal() + real;
        int imaginarysum = num1.getimaginary() + imaginary;
        cout << "sum: " << realsum << " + " << imaginarysum << "j" << "\n";
    }
    void difference(Complex num1) {
        int realdiff = num1.getreal() - real;
        int imaginarydiff = num1.getimaginary() - imaginary;
        cout << "difference: " << realdiff << " + " << imaginarydiff << "j" << "\n";
    }
    void product(Complex num1) {
        int realdiff = num1.getreal() * real - num1.getimaginary() * imaginary;
        int imaginarydiff = num1.getreal() * imaginary + real * num1.getimaginary();
        cout << "product: " << realdiff << " + " << imaginarydiff << "j" << "\n";
    }
};

int main() {
    Complex num1, num2;
    int r1, r2, i1, i2;
    cout << "Enter real and imaginary part of first number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary part of second number: ";
    cin >> r2 >> i2;
    num1.setComplex(r1, i1);
    num2.setComplex(r2, i2);
    num1.sum(num2);
    num1.difference(num2);
    num1.product(num2);
    return 0;
}