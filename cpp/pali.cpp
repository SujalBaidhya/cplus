#include<iostream>
using namespace std;
int fun(int a)
{
	int rem=0,rev=0,temp;
	temp=a;
		while(a>0)
    			{
    				rem=a%10;
    				rev=rev*10+rem;
    				a=a/10;
				}
				if(temp==rev)
				{
					return 1;
				}
				else
				{
					return 2;
				}
}
void fun(int *p,int a)
{
	int i=0,j=0,temp;
				for(i=0;i<a;i++)
				{
				   for(j=i+1;j<a;j++)
				   {
				   	if(*(p+i)>*(p+j))
					   	{
					   		temp=*(p+i);
					   		*(p+i)=*(p+j);
					   		*(p+j)=temp;
						   }
					   }
					}
					cout<<endl<<"The array arranged is:";
					for(i=0;i<a;i++)
				{
					cout<<*(p+i)<<" ";
				}
				cout<<endl<<endl<<"the lowest number is "<<*p<<endl;
				cout<<endl<<"the heighest number is "<<*(p+(a-1))<<endl;
				delete p;
}
int main()
{
	int *p;
	int a=0;
	int i=0,j=0;
    p=new  int;
    cout<<"PALINDROME CHECK"<<endl<<endl;
   	cout<<"Enter the number:";
    cin>>a;
    if(fun(a)==1)
    	{
    			cout<<endl<<"Palindrome"<<endl<<endl;
		}
	else
		{
			cout<<endl<<"Not palindrome"<<endl<<endl;
		}
	delete p;

	cout<<endl<<endl<<"ASCENDING ORDER"<<endl<<endl;
	cout<<"How many elements do u want in array:";
	fflush(stdin);
	cin>>a;
	p=new int[a];
	for(i=0;i<a;i++)
    	{
	    	cout<<endl<<"Enter a number ";
			cin>>*(p+i);
		}
	fun(p,a);	
	                                
	
	return 0;
}