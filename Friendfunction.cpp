#include <iostream>
using namespace std;

class ClassB;  // Forward declaration

class ClassA {
private:
    int valueA;
public:
    ClassA(int a) : valueA(a) {}

    // Declare the friend function
    friend int add(ClassA, ClassB);
};

class ClassB {
private:
    int valueB;
public:
    ClassB(int b) : valueB(b) {}

    // Declare the friend function
    friend int add(ClassA, ClassB);
};

// Definition of the friend function
int add(ClassA a, ClassB b) {
    return a.valueA + b.valueB;
}

int main() {
    ClassA objectA(10);
    ClassB objectB(20);

    cout << "The sum of private data from both classes is: " << add(objectA, objectB) << endl;

    return 0;
}
