#include<iostream>
using namespace std;
class calcu
{
	private:
		float res;
	public:
		void cal(int a,int b)
		{
			res=a+b;
			cout<<"The sum is "<<res;
		}
		void cal(float a,float b)
		{
			res=a-b;
			cout<<"The difference is "<<res;
		}
		void cal(int a,float b)
		{
			res=a*b;
			cout<<"The muliplication is "<<res;
		}
};
int main()
{
	int choice;
	calcu A;
	cout<<"Menu"<<endl<<"1.Add"<<endl<<"2.sub"<<endl<<"3.multiply"<<endl<<"4.exit"<<endl<<"Enter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				int a,b;
				cout<<"Enter 2 numbers:";
				cin>>a>>b;
				A.cal(a,b);
				break;
			}
		case 2:
			{
				float a1,b1;
				cout<<"Enter 2 numbers:";
				cin>>a1>>b1;
				A.cal(a1,b1);
				break;
			}	
		case 3:
			{
				int a2,b2;
				cout<<"Enter 2 numbers:";
				cin>>a2>>b2;
				A.cal(a2,b2);
				break;
			}
		case 4:
			{
				exit(0);
			}
		default:
			{
				cout<<"Not valid";
			}
		
	}
	return 0;
}