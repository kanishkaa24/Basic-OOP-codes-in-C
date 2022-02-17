/*Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.*/

#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll_no;
    int phone_no;
    string address;
};

int main() {
    Student obj1;
    obj1.name = "Sam";
    obj1.roll_no = 5;
    obj1.phone_no = 1234567890;
    obj1.address = "Nagar";
    cout << obj1.name << " " << obj1.roll_no << " " << obj1.phone_no << " " << obj1.address << "\n";
    Student obj2;
    obj2.name = "John";
    obj2.roll_no = 19;
    obj2.phone_no = 1876543210;
    obj2.address = "Vihar";
    cout << obj2.name << " " << obj2.roll_no << " " << obj2.phone_no << " " << obj2.address;
    return 0;
}