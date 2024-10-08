#include<iostream>
using namespace std;
class Nepali;
class Dollar{
	private:
		int d;
	public:
		void setdata()
		{
			cout<<"Enter amount in dollars: "<<endl;
			cin>>d;
		}
	
	friend class Nepali;
};

class Nepali
{
	private:
		int n;
	public:
		void convert()
		{
			Dollar obj;
			obj.setdata();
			n=obj.d*130;
			cout<<"Amount in nepali is "<<n;
		}
};

int main()
{
	Nepali obj1;
	obj1.convert();
	return 0;
	
}










