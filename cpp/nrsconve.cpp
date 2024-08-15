#include<iostream>
using namespace std;
class conve
{
	private:
		int dollar=0;
		float cent=0;
	public:
	conve(float a)
	{
		float rem=0;
		dollar=a/130;
		rem=(a/130)-dollar;
		cent=rem*100;			
	}	
	void display()
	{
		cout<<dollar<<" dollar ";
		cout<<cent<<" cent"<<endl;
	}
};

int main()
{
	float nrs=0;
	cout<<"Enter amount in rupees:";
	cin>>nrs;
	conve A(nrs);
	cout<<endl<<"Type conversion using constructor:"<<endl;
	A.display();
	return 0;
}