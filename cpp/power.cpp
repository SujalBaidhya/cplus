#include<iostream>
using namespace std;
float power(int m,int h,float g=9.8)
{
	return(m*g*h);
}
int main()
{
	float p,m,h;
	cout<<"enter mass and height";
	cin>>m>>h;
	p=power(m,h);
	cout<<p;
	return 0;
}