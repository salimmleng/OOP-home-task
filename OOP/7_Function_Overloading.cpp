
#include <iostream>
using namespace std;

class Calculator {
public:
    // Overloaded sum function for 2 arguments
    int sum(int num1, int num2) {
        return num1 + num2;
    }

    // Overloaded sum function for 3 arguments
    int sum(int num1, int num2, int num3) {
        return num1 + num2 + num3;
    }
};

int main() {
    Calculator cal;

    // Calls the sum function with 3 arguments
    cout << "Sum of 1, 2, and 3: " << cal.sum(1, 2, 3) << endl;

    // Calls the sum function with 2 arguments
    cout << "Sum of 1 and 2: " << cal.sum(1, 2) << endl;

    return 0;
}




// Overloaded Functions:

/*
  C++ automatically selects the correct version of sum based on the number of arguments passed.
  If two arguments are passed, the version of sum that takes two integers is called.
  If three arguments are passed, the version of sum that takes three integers is called.

*/