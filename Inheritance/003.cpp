/*Create a class named 'Member' having the following members:
Data members
1 - Name
2 - Age
3 - Phone number
4 - Address
5 - Salary
It also has a method named 'printSalary' which prints the salary of the members.
// Two classes 'Employee' and 'Manager' inherits the 'Member' class. The 'Employee' and 'Manager' classes have data members 'specialization' and 'department' respectively. Now, assign name, age, phone number, address and salary to an employee and a manager by making an object of both of these classes.*/

#include <bits/stdc++.h>
using namespace std;

class Member {
    public:
    string Name;
    int Age;
    string Phone_Number;
    string Address;
    int Salary;
    void printSalary() {
        cout << Salary;
    }
};

class Employee: public Member {
    public:
    string specialization;
};

class Manager: public Member {
    public:
    string department;
};

int main() {
    Employee Raj;
    Raj.Name = "Raj Kapoor";
    Raj.Age = 52;
    Raj.Phone_Number = "123456790";
    Raj.Address  = "1 A Adarsh Nagar";
    Raj.Salary = 7000000;
    Raj.specialization = "IT";

    Manager Karan;
    Karan.Name = "Karan Kapoor";
    Karan.Age = 52;
    Karan.Phone_Number = "123456790";
    Karan.Address  = "1 A Adarsh Nagar";
    Karan.Salary = 7000000;
    Karan.department = "Community Management";
    return 0;
}