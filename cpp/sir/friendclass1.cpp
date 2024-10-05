#include<iostream>
using namespace std;
class B; //Class B ko declaration
class A{
	private:
		int a;
	public:
		A()
		{
			a=200;
		}
	friend class B;
};

class B{ //class B ko defintion
	private:
		int b;
	public:
		B()
		{
			b=100;
		}
		
	 void add()
	 {
	 	A obj;
	 	int z;
	 	z=b+obj.a;
	 	cout<<"Total: "<<z;
	 }
};

int main()
{

	B obj1; //b=100;
	obj1.add();
	return 0;
	
	
}










