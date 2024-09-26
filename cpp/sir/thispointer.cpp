#include<iostream>
using namespace std;
class KIST{
	private:
		int a;
		int sum;
	public:
		KIST()
		{
			a=100;
		}
		void calculate()
		{
			sum=a+200;
			cout<<sum;
		}
};
int main()
{
	KIST obj;
	obj.calculate();
	return 0;
}
