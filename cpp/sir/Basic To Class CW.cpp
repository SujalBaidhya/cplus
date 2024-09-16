#include<iostream>
using namespace std;

class Convert{
	private:
		int b;
	public:
		Convert()
		{
			b=0;
		}
		Convert(int x)
		{
			b=x;
			cout<<"Using Constructor: "<<b;
		}
		void operator = (int m)
		{
			b=m;
			cout<<"Using Operator Overloading: "<<b;
		}
};

int main()
{
	int y=1,z=2;
	Convert obj1(y);
	Convert obj2;
	obj2=z;
	return 0;
}
	

