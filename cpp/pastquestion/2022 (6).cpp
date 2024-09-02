#include<iostream>
using namespace std;
class con
{
	public:
		string var;
	
//		void getstr()
//		{
////			fflush(stdin);
////			cout<<"Enter string:";
////			getline(cin,var);
//	
//		}
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
	first.var="H""e""l""l""o";
	second.var="W""o""r""l""d";
	ans=first+second;
	cout<<"String concatenated is ";
	ans.display();
	return 0;
}