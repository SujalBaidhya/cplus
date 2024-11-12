#include<iostream>
#include<fstream>
using namespace std;
class A
{
	public:
		int age,roll;
		string name;
		
		void dis()
		{
			cout<<name<<endl;
			cout<<roll<<endl;
			cout<<age;
		}
};
int main()
{
	A obj;
	fstream file_r;
	file_r.open("Classobj.txt",ios::in);
	file_r.read((char*)&obj,sizeof(obj));
	while(!file_r.eof())
	{	
		obj.dis();
		file_r.read((char*)&obj,sizeof(obj));
	}
	return 0;
}