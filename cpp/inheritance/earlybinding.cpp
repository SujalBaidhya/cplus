#include <iostream>
using namespace std;

// Defining the parent class
class Parent 
{
    public: 
 	 void print() 
    { 
        cout << "Parent Class" << endl; 
    } 
};

// Defining the child classs 
class Child : public Parent 
{
    public:
    // print redeclared in child class
   void print()
    {  
        cout << "Child Class" << endl; 
} 
}; 
int main() 
{ 
	Parent *parent ;
	Child obj;//not used virtual function so output will always be parent class
	parent = &obj;
  // catch of the program is here 
// also as we are dealing with pointers instead of . we need to use -> 
 parent->print(); 
 return 0; 
}



