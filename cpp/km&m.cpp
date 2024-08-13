#include<iostream>
using namespace std;
class dis
{
	private:
		int km,m;
	public:
		void setval()
		{
			cout<<"Enter value of km and m:";
			cin>>km>>m;
		}
		dis operator+(const dis &a)
		{
			dis tempobj;
			int rem;
			rem=(m+a.m)/1000;
			tempobj.m=(m+a.m)%1000;
			tempobj.km=km+a.km+rem;
			return tempobj;
		}
		void display()
		{
			cout<<"km="<<km<<endl;
			cout<<"m="<<m;
		}
};
int main()
{
	dis A,B,Ans;
	A.setval();
	B.setval();
	c.setval();
	Ans=A+B;
	Ans.display();
	return 0;
}