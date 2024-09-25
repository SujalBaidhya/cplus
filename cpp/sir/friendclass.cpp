#include<iostream>
using namespace std;
class B; //Class B ko declaration
class A{
	private:
		int a;
	public:
		void setdata()
		{
			cout<<"Enter value for a: ";
			cin>>a;
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
		
	 void add(A &obj)
	 {
	 	int z;
	 	z=b+obj.a;
	 	cout<<"Total: "<<z;
	 }
};

int main()
{
	A obj;
	obj.setdata();
	B obj1;
	obj1.add(obj);
	return 0;
	
	
}










