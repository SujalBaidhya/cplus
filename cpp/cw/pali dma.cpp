#include<iostream>
using namespace std;
int main()
{
	int *p,*r,*temp,*rev;
	p=new int;
	r=new int;
	temp=new int;
	rev=new int;
	cout<<"Enter a number:";
	cin>>*p;
	*temp=*p;
	*rev=0;
	while(*temp>0)
	{
		*r=*temp%10;
		*rev=(*rev)*10+*r;
		*temp=*temp/10;
	}
	if(*p==*rev)
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not palindrome";
	}
	delete p;
	delete temp;
	delete r;
	delete rev;
	return 0;
}