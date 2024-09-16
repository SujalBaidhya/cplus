#include<iostream>
using namespace std;
class X{
	private:
		int a;
	public:
		X(int m)
		{
			a=m;	
			cout<<a;
		}

};

int main()
{
	int y=50;	
	X obj(y);
	return 0;

}


