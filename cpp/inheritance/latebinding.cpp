#include <iostream>
using namespace std;

// Defining the parent class
class Parent 
{
    public: 
 	virtual void print() 
    { 
        cout << "Parent Class" << endl; 
    } 
};

// Defining the child classs 
class Child : public Parent 
{
    public:
    // print redeclared in child class
    //if virtual class is only declared in derived class then late binding wont work since base class wont have knowledge of virtual class
   void print()
    {  
        cout << "Child Class" << endl; 
} 
}; 
int main() 
{ 
	Parent *parent ;
	Child obj;
	parent = &obj;
  // catch of the program is here 
// also as we are dealing with pointers instead of . we need to use -> 
 parent->print(); 
 return 0; 
}



