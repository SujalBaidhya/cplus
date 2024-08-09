#include<iostream>
using namespace std;
class add
{
	private:
		int real,imaginary;
	public:
		add operator+(add &first)
		{
			add d;
			d.real=real+first.real;
			d.imaginary=imaginary+first.imaginary;
			return d;
		}
		void setvalue()
		{
		cout<<"Enter real part:";
		cin>>real;
		cout<<"Enter imaginary part:";
		cin>>imaginary;
		}
		void display()
		{
			cout<<"The sum is "<<real<<"+"<<imaginary<<"i";
		}
};
int main()
{
	add a,b,c;
	a.setvalue();
	b.setvalue();
	c=a+b;
	c.display();
	return 0;
}
