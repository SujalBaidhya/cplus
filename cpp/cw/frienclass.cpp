#include<iostream>
using namespace std;
class Nrs;
class Do
{
	private:
		int d;
	public:
		void setval()
		{
			cout<<"Enter amt in dollars:";
			cin>>d;
		}
		friend class Nrs;
};
class Nrs
{
	private:
		int ns;
	public:
		void con(Do &a)
		{
			ns=a.d*130;
			cout<<"Nrs="<<ns;
		}
};
int main()
{
	Do a;
	Nrs b;
	a.setval();
	b.con(a);
	return 0;
}