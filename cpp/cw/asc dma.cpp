#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"size of array:";
	cin>>n;
	int *p,*temp;
	p=new int[n];
	temp=new int;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element of "<<i<<" index:";
		cin>>*(p+i);
	}
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(p+j)<*(p+i))
			{
				*temp=*(p+j);
				*(p+j)=*(p+i);
				*(p+i)=*temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
	delete []p;
	delete temp;
	return 0;
}