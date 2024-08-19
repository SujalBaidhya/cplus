#include<iostream>
using namespace std;
class A
{
	protected:
		int protectedvar;
	public:
		void setval()
		{
			protectedvar=10;
		}
		friend class B;
};
class B
{
	public:
		void seeval(A b)
		{
			cout<<b.protectedvar;
		}
};
int main()
{
	A c;
	c.setval();
	B C;
	C.seeval(c);
	return 0;
}