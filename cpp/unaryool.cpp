#include<iostream>
using namespace std;
class a
{
	private:
		int b;
	public:
	a(int s)
	{
		b=s;
	}
	a(a &d)
	{
		b=d.b;
	}
	void operator++()
	{
		b=b/3;
		cout<<"The quotient is "<<b<<endl;
	}
	void operator++(int)
	{
		int temp,rem;
		temp=b;
		rem=temp%2;
		if(rem==1)
		{
			cout<<"the quotient is odd"<<endl;
		}
		else 		
		{
			cout<<"the quotient is even"<<endl;
		}
	}
};
int main()
{
	int c;
	cout<<"Enter a number:";
	cin>>c;
	a obj1(c);
	a obj2(obj1);
	++obj1;
	obj1++;
	return 0;
}