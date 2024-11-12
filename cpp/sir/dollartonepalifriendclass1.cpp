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
		void convert(Dollar &obj)
		{
		

			n=obj.d*130;
			cout<<"Amount in nepali is "<<n;
		}
};

int main()
{
	Dollar obj2;
	obj2.setdata();
	Nepali obj1;
	obj1.convert(obj2);
	return 0;
	
}










