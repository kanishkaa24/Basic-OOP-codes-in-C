/*To overload unary operators that is increment and decrement*/

#include <bits/stdc++.h>
using namespace std;

class Operator {
    int val;
    public:
    void getValue(int val) {
        this -> val = val;
    }
    void operator++() {
        ++val;
        cout << "After incrementing: " << val << "\n";
    }
    void operator--() {
        --val;
        cout << "After decrementing: " << val << "\n";
    }
};

int main() {
    Operator val;
    val.getValue(6);
    ++val;
    --val;
    return 0;
}