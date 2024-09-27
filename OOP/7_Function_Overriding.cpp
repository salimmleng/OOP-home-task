#include <iostream>
using namespace std;

// Base class Animal
class Animal {
public:
    // Virtual function for speak
    virtual void speak() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class Dog inheriting from Animal
class Dog : public Animal {
public:
    // Overriding the speak method
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class Cat inheriting from Animal
class Cat : public Animal {
public:
    // Overriding the speak method
    void speak() override {
        cout << "Cat mews" << endl;
    }
};

int main() {
    // Creating objects
    Animal ani;
    Dog dog;
    Cat cat;

    // Calling speak methods
    ani.speak();  // Calls Animal's speak method
    dog.speak();  // Calls Dog's overridden speak method
    cat.speak();  // Calls Cat's overridden speak method

    return 0;
}



