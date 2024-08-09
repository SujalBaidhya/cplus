#include<iostream>
using namespace std;
class B;
class A
{
	private:
	int x;
	public:
	void setvalue()
	{
		cout<<"Enter a number:";
		cin>>x;
	}	
	friend void sum(A,B);

};
class B
{
	private:
	int y;
	public:
	void setvalue()
	{
		cout<<"Enter a number:";
		cin>>y;
	}
	friend void sum(A ,B );	
};
void sum(A q,B r)
{
	int c;
	c=q.x+r.y;
	cout<<"The sum of two nmber is:"<<c;
}
int main()
{
	A a;
	B b;
	a.setvalue();
	b.setvalue();
	sum(a,b);
	return 0;
	
}