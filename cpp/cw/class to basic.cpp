#include<iostream>
using namespace std;
class A
{
	float p,t,r;
	public:
		A()
		{
			cout<<"Enter p,t and r:";
			cin>>p>>t>>r;
		}
		float cal()
		{ 
			float si;
			cout<<"function called"<<endl;
			si=p*t*r/100;
			return si;
		}
		operator int()
		{
			float si;
			cout<<"casting operator called"<<endl;
			si=p*t*r/100;
			return si;
		}
};
int main()
{
	A obj;
	float a;
	a=obj.cal();
	cout<<"The si is "<<a<<endl;
	a=obj;
	cout<<"The si is "<<a;
	return 0;
}