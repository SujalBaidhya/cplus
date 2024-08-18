#include<iostream>
using namespace std;
class conv
{
	private:
		int hr,min;
	public:
		conv(int a,int b)
		{
			min=a%60;
			hr=b+(a/60);
		}
		operator int ()
		{
			cout<<"Data in class:"<<endl;
			cout<<"hour:"<<hr<<" min:"<<min<<endl;
			return(hr*60+min);
		}
		
		~conv()
		{
			cout<<"Destructor called";
		}
};
int main()
{
	int a,b,stor;
	cout<<"Enter min:";
	cin>>a;
	cout<<"Enter hr:";
	cin>>b;
	conv first(a,b);
//	stor=first;
	stor=first.operator int();
	cout<<"Total minute is:"<<stor<<endl;
	return 0;
}