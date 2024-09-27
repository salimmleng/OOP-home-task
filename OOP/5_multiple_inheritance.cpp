#include <iostream>
#include <string>

using namespace std;

// Base class person
class Person {
public:
    string name;
    int age;

    // constructor for person class
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void personInfo() {
        cout << name << " - " << age << endl;
    }
};

// Base class company
class Company {
public:
    string cname;
    string cloc;
     // constructor for company class
    Company(string cname, string cloc) {
        this->cname = cname;
        this->cloc = cloc;
    }

    void companyInfo() {
        cout << cname << " - " << cloc << endl;
    }
};

// Derived class employee inherits from both person and company
class Employee : public Person, public Company {
public:
    Employee(string name, int age, string cname, string cloc) : Person(name, age), Company(cname, cloc) {
        // Explicitly calling constructors of both base classes
    }
};

int main() {
    // Create an employee object
    Employee emp("salim", 27, "polygon", "Dhaka");

    // Call methods to print info
    emp.personInfo();
    emp.companyInfo();

    return 0;
}
