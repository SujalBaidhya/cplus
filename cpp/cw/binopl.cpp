#include<iostream>
using namespace std;
class Bin
{
	private:
		int x;
	public:
		void set()
		{
			cout<<"Enter a number:";
			cin>>x;
		}
		void const operator +(Bin &A)
		{
			x+=A.x;
			cout<<x;
		}
};
int main()
{
	Bin A,B;
	A.set();
	B.set();
	A+B;
	return 0;
}