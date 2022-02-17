/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.*/

#include <bits/stdc++.h>
using namespace std;

class Triangle {
    public:
    int side1 = 3;
    int side2 = 4;
    int side3 = 5;
    void func(){
        int perimeter = side1 + side2 + side3;
        int area = side1 * side2 * side3;
        cout << "perimeter: " << perimeter << "\n";
        cout << "area: " << area << "\n";
    }
};

int main() {
    Triangle once;
    once.func();
    return 0;
}