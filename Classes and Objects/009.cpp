/*Print the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate and print the average without creating any object of the Average class.*/

#include <bits/stdc++.h>
using namespace std;

class Average {
    public:
    static void averageNum(int var1, int var2, int var3) {
        float avg = var1 + var2 + var3;
        avg /= 3;
        cout << "Average is " << avg;
    }
};

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    Average::averageNum(num1, num2, num3);
    return 0;
}