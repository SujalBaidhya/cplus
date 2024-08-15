#include<iostream>
using namespace std;
inline int sum(int x ,int y)
{
	return x+y;
}
int main()
{
	int a,b,s;
	cout<<"Enter 2 numbers:";
	cin>>a>>b;
	s=sum(a,b);
	cout<<"The sum is "<<s;
	return 0;
}
//inline int sum(int x,int y)
//{
//	return x+y;
//}