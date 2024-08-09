#include<iostream>
using namespace std;
float area(int rad,float pie=3.14)
{
	return(pie*rad*rad);
}
int main()
{
	int r;
	cout<<"enter radius";
	cin>>r;
	cout<<area(r);
	return 0;
}