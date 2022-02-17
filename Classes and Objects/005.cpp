/*Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor.*/

#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    public:
    int length, breadth;
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    int func(){
        int area = length * breadth;
        return area;
    }
};

int main() {
    Rectangle uno(4, 5);
    cout << "Area: " << uno.func() << "\n";
    Rectangle dos(5, 8);
    cout << "Area: " << dos.func() << "\n";
    return 0;
}