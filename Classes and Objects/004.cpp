/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with the constructor having the three sides as its parameters.*/

#include <bits/stdc++.h>
using namespace std;

class Triangle {
    public:
    int side1, side2, side3;
    Triangle(int s1, int s2, int s3){
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }
    void func() {
        int perimeter = side1 + side2 + side3;
        int area = side1 * side2 * side3;
        cout << "perimeter: " << perimeter << "\n";
        cout << "area: " << area << "\n";
    }
};

int main() {
    Triangle once(3, 4, 5);
    once.func();
    return 0;
}