#include<iostream>
using namespace std;
class sta
{
	static float g;
	int m,h;
	float p;
	public:
		void PE(int a,int b)
		{
			m=a;
			h=b;
			p=m*g*h;
			cout<<"mass="<<m<<endl<<"height="<<h;
			cout<<"Potential energy is "<<p<<endl;
		}
		static void dis()
		{
			cout<<"gravity="<<g<<endl;
		}
};
float sta::g=9.8;
int main()
{
	sta a,b;
	a.dis();
	a.PE(100,5);
	b.dis();
	b.PE(50,10);
}