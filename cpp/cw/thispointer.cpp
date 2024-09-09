#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A()
		{
			cout<<"Enter a number:";
			cin>>this->a;
		}
		friend class B;
};
class B
{
	int sum,b;
	public:
		B()
		{
			cout<<"Enter a number:";
			cin>>this->b;
		}
		void add(A &e)
		{
			this->sum=e.a+this->b;
			cout<<"The sum is "<<this->sum;
		}
};
int main()
{
	A c;
	B d;
	d.add(c);
	return 0;
}