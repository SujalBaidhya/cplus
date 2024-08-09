#include<iostream>
using namespace std;
class A
{
	public:
		int a,b;
		string name;
	public:
		A(string objname)
		{
			name=objname;
			a=8,b=7;
			cout<<"The constants are:"<<a<<" "<<b<<endl;
		}
		A(string objname,int x,int y)
		{
			name=objname;
			a=x;
			b=y;
			cout<<"Sum of input:"<<x+y<<endl;
		}
		A(A &second)
		{
			name=second.name+" ko copy";
			a=second.a+2;
			b=second.b+2;
		}
		void geta()
		{
			cout<<a<<endl;
		}
	    void getb()
		{
			cout<<b<<endl;
		}
		~A()
		{
			cout<<"Destructor works for "<<name<<endl;
		}
};
int main()
{
	A first("first obj");
	int var,var1;
	cout<<"Enter 2 numbers:";
	cin>>var>>var1;
	A second("second obj",var,var1);
	A third(second);
	cout<<"+2 in first input:"<<endl;
	third.geta();
	cout<<"+2 in second input:"<<endl;
	third.getb();
	return 0;
}