// C++ Program to  illustrate how we can implement a copy
// constructor in a derived class
#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int baseData;

public:
    Base(int data)
        : baseData(data)
    {
        cout << "Base constructor called with data: "
             << data << endl;
    }

    // Copy constructor
    Base(const Base& other)
        : baseData(other.baseData)
    {
        cout << "Base copy constructor called" << endl;
    }

    void display()
    {
        cout << "Base data: " << baseData << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    int derivedData;

public:
    Derived(int baseData, int derivedData)
        : Base(baseData)
        , derivedData(derivedData)
    {
        cout << "Derived constructor called with data: "
             << derivedData << endl;
    }

    // defining the copy constructor of derived class and
    // calling the base class copy constructor too
    Derived(const Derived& other)
        : Base(other)
        , derivedData(other.derivedData)//this initializes the object with data from "other"object
    {
        cout << "Derived copy constructor called" << endl;
    }

    void display()
    {
        // Call base class's display function
        Base::display();
        cout << "Derived data: " << derivedData << endl;
    }
};

int main()
{
    Derived obj1(10, 20);
    // Copy constructor of derived class is called
    Derived obj2 = obj1;

    cout << "\nObject 1:" << endl;
    obj1.display();
    cout << "\nObject 2:" << endl;
    obj2.display();

    return 0;
}
