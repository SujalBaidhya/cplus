#include<iostream>
using namespace std;
class calculate
{
	private:
	int a,b,mult,diff,sum;
	public:
	void store()
	{
		cout<<"Enter 2 numbers:";
		cin>>a>>b;
		cout<<endl;
	}
	void add()
	{
		sum=a+b;
		cout<<"The sum of two numbers is:"<<sum<<endl;
		cout<<endl<<endl;	
	}
	void minus()
	{
		diff=a-b;
		cout<<"The difference is:"<<diff<<endl;
		cout<<endl<<endl;

	}
	void product()
	{
		mult=a*b;
		cout<<"The product is:"<<mult<<endl;
		cout<<endl<<endl;;
		
	}
};
int main()
{
	class calculate a;
	int choice;
	while (1)
	{
	cout<<"Menu"<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.Subtraction"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"Enter your choice:";
	cin>>choice;
	a.store();
	switch(choice)
	{
	
		case 1:
			{
				a.add();
				break;
			}
		case 2:
            {
            	a.minus();
            	break;
			}
		case 3:
		    {
		    	a.product();
		    	break;
			}	
		case 4:
		 	{
		 		exit(0);
			}	
	}
}
	return 0;
}