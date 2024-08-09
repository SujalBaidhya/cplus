#include<iostream>
using namespace std;
class conv
{
	private:
		int ft;
		int inches;
	public:
		conv(float a)
		{
			ft=a*0.0328084;
			inches=((a*0.3937)/12-ft)*10;;
			
		}
		void display()
		{
			cout<<"height is feet "<<ft;
			cout<<" and "<<inches<<" inches";
		}
};
int main()
{
	float height;
	cout<<"enter height in cm:";
	cin>>height;
	conv b(height);
	b.display();
	return 0;
}