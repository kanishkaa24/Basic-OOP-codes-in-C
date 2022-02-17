/*Create a class Binary that contains one float data member. Overload the 4 arithmetic operator’s. Also overload insertion and extraction operators.*/

#include <bits/stdc++.h>
using namespace std;

class Arithmetic {
    int num1;
    int num2;
    public:
    void getValue(int num1, int num2) {
        this -> num1 = num1;
        this -> num2 = num2;
    }
    void operator+() {
        cout << "Sum: " << num1 + num2 << "\n";
    }
    void operator-() {
        cout << "Difference: " << num1 - num2 << "\n";
    }
    void operator*() {
        cout << "Product: " << num1 * num2 << "\n";
    }
    void operator/() {
        cout << "Quotient: " << num1 / num2 << "\n";
    }
};

int main() {
    Arithmetic object;
    object.getValue(56, 7);
    object+;
    object-;
    object*;
    object/;
    return 0;
}