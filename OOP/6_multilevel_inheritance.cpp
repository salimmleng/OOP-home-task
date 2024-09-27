#include <iostream>
#include <string>

using namespace std;

// Base class Animal
class Animal {
public:
    string name;

    // Constructor for Animal
    Animal(string name) {
        this->name = name;
    }
};

// Derived class Mamal (inherits from Animal)
class Mamal : public Animal {
public:
    string habitat;

    // Constructor for Mamal
    Mamal(string name, string habitat) : Animal(name) {
        this->habitat = habitat;
    }
};

// Further derived class Dog (inherits from Mamal)
class Dog : public Mamal {
public:
    // Constructor for Dog
    Dog(string name, string habitat) : Mamal(name, habitat) {} 
    

    // Method to display Dog information
    void display() {
        cout << name << " - " << habitat << endl;
    }
};

int main() {
    // Create an instance of Dog
    Dog dog("Lalu", "jungle");

    // Call the display method
    dog.display();

    return 0;
}
