#include<iostream>
using namespace std;
class cpy
{
	private:
		int x;
	public:
		cpy operator=(const cpy &a)
		{
			//this is a special pointer which points to object which is calling member function in this case copyclass and third
			x=a.x;
			cout<<this<<endl;
			return *this;
		}
//		 used for basic to class conversion
		void operator=(int a)
		{
			x=a;
		}
		void setval()
		{
			cout<<"enter a number:";
			cin>>x;
		}
		void display()
		{
			cout<<"The number is "<<x<<endl;
		}
};
int main()
{
	cpy first,second,copyclass,third;
	first.setval();
	third=copyclass=first;
	cout<<&copyclass<<endl<<&third<<endl;
	second=5;
	second.display();
	copyclass.display();
	third.display();
	return 0;
}