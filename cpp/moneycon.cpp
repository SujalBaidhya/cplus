#include<iostream>
using namespace std;
int conv(int dollar,int crate=130)
{
	int nrs;
	nrs=dollar*crate;
	return nrs;	
}
int main()
{
	int d;
	cout<<"enter dollar:";
	cin>>d;
	cout<<conv(d);
	return 0;
}