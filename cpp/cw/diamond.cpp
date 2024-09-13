#include<iostream>
using namespace std;
class base
{
	protected:
	int x;
	public:
		void set()
		{
			cout<<"Enter a val:";
			cin>>x;
		}
};
class derivedA:virtual public base//if the class is not made virtual when derivedC tries to access
// member of class base it gets confused as to which route to take while trying to access either from derivedA or derivedB
{
	protected:
	int y;
	public:
		void sety()
		{
			y=x;
		}
};
class derivedB:virtual public base
{
	protected:
	int z;
	public:
		void setz()
		{
			z=x;
		}
};
class derivedC:public derivedA,public derivedB
{
	int w;
	public:
		void setw()
		{
			w=x;
		}
		void see()
		{ 
			cout<<"w="<<w<<endl;
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
};
int main()
{
	derivedC A;
	A.set();
	A.setw();
	A.sety();
	A.setz();
	A.see();
	return 0;
}