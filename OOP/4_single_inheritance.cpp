#include <iostream>
#include <string>
using namespace std;

// Parent class A
class A {
public:
    string name;

    // Constructor for class A
    A(string name) {
        this->name = name;
    }

    // Display method to print the name
    void display() {
        cout << name << endl;
    }
};

// Child class B inheriting from class A
class B : public A {
public:
    // Constructor for class B
    B(string name) : A(name) {
        // Calling parent class constructor using initializer list
    }
};

int main() {
    
    B obj("Salim");   //  Creating an object of class B with name "Salim"
    obj.display();

    return 0;
}