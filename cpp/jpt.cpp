#include<iostream>
using namespace std;
class A
{
	int real,img;
	public:
		void setval()
		{
			cout<<"enter real number:";
			cin>>real;
			cout<<"enter imaginary part:";
			cin>>img;
		}
		A const operator+(A &temp)
		{
			A d;
			d.real=real+temp.real;
			d.img=img+temp.img;
			return d;
		}
		friend class sum;
	
};
class sum
{
	int real,img;
	public:
		void  operator=(const A &a)
		{
			real=a.real;
			img=a.img;
		}
		void display()
		{
			cout<<"The sum is "<<real<<"+"<<img<<"i";
		}
};
int main()
{
	A obj,obj2;
	sum res;
	obj.setval();
	obj2.setval();
	res=(obj+obj2);
	res.display();
	return 0;
	
}
