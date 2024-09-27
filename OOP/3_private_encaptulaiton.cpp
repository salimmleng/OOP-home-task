#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    // Private attributes
    string name;
    int age;

    // Private method
    void display_info() {
        cout << name << " - " << age << endl;
    }

public:
    // Constructor to initialize private attributes
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Public method to access the private method
    void show_info() {
        display_info();
    }
};

int main() {
    // Create an object of the Person class
    Person p("Salim", 28);

    // Trying to access private method directly (this will raise an error in C++ if attempted)
    // p.display_info(); // Error: 'display_info' is a private member of 'Person'

    // Access private method through public method
    p.show_info();  

    return 0;
}


// Output: Salim - 28
