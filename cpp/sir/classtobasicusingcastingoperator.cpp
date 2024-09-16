#include<iostream>
using namespace std;

class X{
	private:
		int a;
	public:
		X()
		{
			a=6;
		}
		operator int()
		{
			return a;
		}
		
};

int main()
{
	X obj;
	int ret=0;
	ret=obj; //class to basic
	cout<<"Return value is : "<<ret;
	
	return 0;
}


