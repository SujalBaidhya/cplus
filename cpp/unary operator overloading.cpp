#include<iostream>
using namespace std;
class opeover
{
	public:
		int x;
		opeover(int y)
		{
			x=y;
		}
		void operator ++()
		{
			cout<<"prefix operator:";
			--x;
		}
		void operator --(int)
		{
			cout<<"postfix operator:";
			++x;
		}
};
int main()
{
	int b,d;
	cout<<"enter a number:";
	cin>>b;
	opeover a(b);
	++a;
	cout<<d;
	cout<<a.x<<endl;
	a--;
	cout<<a.x;
	return 0;
	
}
