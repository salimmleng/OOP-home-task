#include <iostream>
using namespace std;

class A {
    // No members defined
};

// Define a function outside of the class
void display() {
    cout << "I am Methods" << endl;
}

int main() {
    A obj; // Create an instance of class A

    // Call the display function
    display(); // Function call

    // Output the address of the function (similar to printing a reference in Python)
    cout << (void*)display << endl; // Print the function pointer
    cout << (void*)display << endl;
    // Print the object representation (default behavior)
    cout << &obj << endl; // Print the address of the object

    return 0;
}
