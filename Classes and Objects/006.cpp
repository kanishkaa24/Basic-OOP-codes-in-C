/*Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.*/

#include <bits/stdc++.h>
using namespace std;

class Area {
    public:
    int length, breadth;
    void setDim(int l, int b){
        length = l;
        breadth = b;
    }
    int getArea(){
        int area =  length * breadth;
        return area;
    }
};

int main() {
    int len, br;
    Area uno;
    cout << "Enter the length and the breadth: ";
    cin >> len >> br;
    uno.setDim(len, br);
    cout << "Area: " << uno.getArea();
    return 0;
}