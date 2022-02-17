/*Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.*/

#include <bits/stdc++.h>
using namespace std;

class Employee {
    private:
    int salary;
    int numHours;
    public:
    void getInfo(int sal, int hours) {
        salary = sal;
        numHours = hours;
        AddSal();
    }
    void AddSal() {
        salary < 500 ? salary += 10 : salary += 0;
        AddWork();
    }
    void AddWork() {
        numHours > 6 ? salary += 5 : salary += 0;
        cout << "Final salary: " << salary;
    }
    
};

int main() {
    Employee person;
    int sal, hours;
    cout << "Enter salary: ";
    cin >> sal;
    cout << "Enter number of hours: ";
    cin >> hours;
    person.getInfo(sal, hours);
    return 0;
}