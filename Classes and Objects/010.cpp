/*Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. The output should be as follows:
Name        Year of joining        Address
Robert        1994        64C- WallsStreet
Sam        2000        68D- WallsStreet
John        1999        26B- WallsStreet*/

#include <bits/stdc++.h>
using namespace std;

class Employee {
    public:
    string name;
    int year;
    string address;
    Employee(string n, int y, string a){
        name = n;
        year = y;
        address = a;
    }
    void printInfo(){
        cout << name << "   " << year << "   " << address << "\n";
    }
};

int main() {
    Employee Robert("Robert", 1994, "64C- WallsStreet");
    Employee Sam("Sam", 2000, "68D- WallsStreet");
    Employee John("John", 1999, "26B- WallsStreat");
    cout << "Name    Year of Joining    Address\n";
    Robert.printInfo();
    Sam.printInfo();
    John.printInfo();
    return 0;
}