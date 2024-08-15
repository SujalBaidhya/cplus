#include<iostream>
using namespace std;
class conve
{
	private:
		int dollar=0;
		int cent=0;
	public:
	void operator=( const float );
	void display()
	{
		cout<<dollar<<" dollar ";
		cout<<cent<<" cent"<<endl;
	}
};

void conve::operator=(float d)
{
		float rem;
		dollar=d/130;
		rem=(d/130)-dollar;
		cent=rem*100;	
}
int main()
{
	float nrs=0;
	cout<<"Enter amount in rupees:";
	cin>>nrs;
	conve B;
	B= nrs;
	cout<<endl<<"Type conversion using operator overload: "<<endl;
	B.display();
	return 0;
}