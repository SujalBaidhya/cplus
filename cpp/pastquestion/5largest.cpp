#include<iostream>
using namespace std;
int main()
{
	int asc[10],i=0,j=0,temp=0;
	for(i=0;i<10;i++)
	{
		cout<<"Enter number for "<<i<<" index";
		cin>>asc[i];	
	}
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			if(asc[j]>asc[i])
			{
				temp=asc[i];
				asc[i]=asc[j];
				asc[j]=temp;
			}
		}
	}
	cout<<"Five largest value are:";
	for(i=0;i<5;i++)
	{
		cout<<" ";
		cout<<asc[i];
	}
	return 0;
}