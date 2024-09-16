#include<iostream>
using namespace std;
class X{
	private:
		int a;
	public:
		void operator =(int m)
		{
			a=m;
			cout<<a;
		}

};

int main()
{
	int y=50;	
	X obj;
	obj=y;
	return 0;

}


