#include<iostream>
using namespace std;
class Dis
{
	private:
		int m,km;
	public:
		Dis(int a, int b)
		{
			km=a;
			m=b;
		}
		int conv()
		{
			return (km*1000+m);
		}
		
};
class Dis2
{
	int m;
	public:
		void operator=(Dis &obj1)
		{
			m=obj1.conv();
		}
		void display()
		{
			cout<<m;
		}
		
};
int main()
{
	int a,b;
	cout<<"Enter km and m: ";
	cin>>a>>b;
	Dis obj1(a,b);
	Dis2 obj2;
	obj2=obj1;
	cout<<"Total distance in meter is:";
	obj2.display();
	return 0;	
}