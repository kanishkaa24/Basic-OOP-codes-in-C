/* Make a class named Fruit with a data member to calculate the number of fruits in a basket. Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket. Print the number of fruits of each type and the total number of fruits in the basket. */

#include <bits/stdc++.h>
using namespace std;

class Apples {
    public:
    int numOfApples = 50;
};

class Mangoes {
    public:
    int numOfMangoes = 65;
};

class Fruit : public Apples, public Mangoes {
    int totalFruits;
public:
    void printSum(){
        totalFruits = numOfApples + numOfMangoes;
        cout << "Total number of apples: " << numOfApples << "\n";
        cout << "Total number of mangoes: " << numOfMangoes << "\n";
        cout << "Total number of fruits: " << totalFruits << "\n";
    }
};

int main() {
    Fruit total;
    total.printSum();
    return 0;
}