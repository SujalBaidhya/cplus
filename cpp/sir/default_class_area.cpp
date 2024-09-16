//WAP default area using class
#include<iostream>
using namespace std;

class Area{		
	public:
		int area(int l=10, int b=20)
		{
			return l*b;
		}
};

int main()
{
	Area door;
	cout<<"Area: "<<door.area();
}