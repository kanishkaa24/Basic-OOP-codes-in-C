/*Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of its length and breadth as parameters of its constructor and having a function named 'returnArea' which returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard*/

#include <bits/stdc++.h>
using namespace std;

class Area {
    public:
    int length, breadth;
    Area(int l, int b){
        length = l;
        breadth = b;
    }
    int returnArea() {
        int area =  length * breadth;
        return area;
    }
};

int main() {
    int len, br;
    cout << "Enter the length and the breadth: ";
    cin >> len >> br;
    Area uno(len, br);
    cout << "Area: " << uno.returnArea();
    return 0;
}