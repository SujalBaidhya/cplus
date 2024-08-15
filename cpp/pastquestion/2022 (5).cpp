#include<iostream>
using namespace std;
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0,sum=0;
	float avr=0;
	for(i=0;i<10;i++)
	{
		sum+=arr[i];
	}
	avr=sum/10;
	cout<<"The sum of array is:"<<sum<<endl;
	cout<<"The average is:"<<avr<<endl;
	return 0;
}