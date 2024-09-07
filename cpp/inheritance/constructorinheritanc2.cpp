#include <iostream>
using namespace std;

class parent
{

    public:
    int w,x;

    // parameterized constructor
    parent(int i,int j)
    {
    	
        x = i;
        w=j;
        cout << "Parent class Parameterized Constructor\n";
        cout<<w<<x<<endl;
    }
};

class child: public parent
{

    public:
    int y,z;

    // parameterized constructor
    child(int j,int i) : parent(j,i)  //Explicitly calling
    {
    	
    	z=i;
        y = j;
        cout << "Child class Parameterized Constructor\n";
        cout<<z<<y;
    }
};

int main()
{
   child c(10,90);
    return 0;
}