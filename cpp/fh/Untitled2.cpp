#include<iostream>
#include<fstream>
using namespace std;
class A
{
	public:
		int age,roll;
		string name;
		A()
		{
			cout<<"Enter name:";
			getline(cin,name);
			cout<<"Enter age:";
			cin>>age;
			cout<<"Enter roll:";
			cin>>roll;
		}
};
int main()
{
	A obj;
	fstream file_w;
	file_w.open("Classobj.txt",ios::app);
	file_w.write((char*)&obj,sizeof(obj));
	file_w.close();
	return 0;
}