#include<iostream>
using namespace std; 
class ope
{ 
private: 
	int x;
public:
	void set ()
	{
		cout<<"Enter a number:";
		cin>>x;
	}
	void operator ++(int)
	{
		x=x+1;
		cout<<x;
	}
};
int main()
{
	ope A;
	A.set();
	A++;
	return 0;
}