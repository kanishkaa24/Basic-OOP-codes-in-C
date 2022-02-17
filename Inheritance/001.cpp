/* Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes. Now, create a function in each of these classes which prints "I am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as well as Marine Animals" respectively. Now, create an object for each of the above class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale */

#include <bits/stdc++.h>
using namespace std;

class Mammals {
public:
    void print() {
        cout << "I am mammal";
    }
};

class MarineAnimals {
public:
    void print() {
        cout << "I am marine animal";
    }
};

class BlueWhale : public Mammals, public MarineAnimals {
public:
    void print() {
        cout << " I belong to both the categories: Mammals as well as Marine Animals";
    }
};

int main()
{
    Mammals obj1;
    obj1.print();
    MarineAnimals obj2;
    obj2.print();
    BlueWhale obj3;
    obj3.print();
    obj3.Mammals::print();
    obj3.MarineAnimals::print();
    return 0;
}