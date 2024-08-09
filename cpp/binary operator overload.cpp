#include<iostream>
using namespace std;
class overload
{
	private:
		int x,y;
	public:
		overload()
		{
			x=3;
			y=5;
		}
		overload operator+(overload &obj)
		{
			overload temp;
			temp.x=x-obj.x;
			temp.y=y*temp.y;
			return temp;
		}
		void display()
		{
			cout<<"value of x and y is:"<<x<<" and "<<y;
		}
};
int main()
{
	overload a;
	overload b,d;
	d=a+b;
	d.display();
	return 0;
}