#include<iostream>
using namespace std;

class Y{

	public:
	int b;
	
		Y()
		{
			b=5460;
		}
};
class X{
	private:
		int a;
	public:
	
		X()
		{
			a=0;
		}
		X(Y &t)
		{
			a=t.b;
			cout<<a-10;
		}
	
};



int main()
{
	Y obj;
	X obj2(obj);
	return 0;
}
