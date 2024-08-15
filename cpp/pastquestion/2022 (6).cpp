#include<iostream>
using namespace std;
class con
{
	private:
		string var;
	public:
		void getstr()
		{
			fflush(stdin);
			cout<<"Enter string:";
			getline(cin,var);
		}
		void display()
		{
			cout<<var;
		}
		con operator+(const con &obj)
		{
			con obj2;
			obj2.var=var+obj.var;
			return obj2;
		}
};
int main()
{
	con first,second,ans;
	first.getstr();
	second.getstr();
	ans=first+second;
	cout<<"String concatenated is ";
	ans.display();
	return 0;
}