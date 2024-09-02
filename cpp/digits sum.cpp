#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,temp=0,count=0,i=0,temp2=0,num=0,sum=0,temp3=0,rem=0,power=0;
	int *p;
	cout<<"Enter a number:";
	cin>>x;
	temp=x;
	while(temp>0)
	{
		temp=temp/10;
		count++;
	}
	temp2=count-1;
	temp3=count;
	p=new int[temp2];
	for(i=0;i<count;i++)
	{
		power=pow(10,temp3);
		rem=x%power;
		*(p+i)=rem/pow(10,temp2);
		sum+=*(p+i);
		temp2--;
		temp3--;
	}
	cout<<"Total digits = "<<count<<endl;
	cout<<"Sum = "<<sum;
	return 0;
}