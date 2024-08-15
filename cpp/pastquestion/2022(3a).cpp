#include<iostream>
using namespace std;
class Employee 
{
	private:
		int ID,salary;
		string name,position;
	public:
		void set()
		{
			cout<<"Enter id no:";
			cin>>ID;
			fflush(stdin);
			cout<<"Enter name:";
			getline(cin,name);
			cout<<"Enter position:";
			getline(cin,position);
			cout<<"Enter salary:";
			cin>>salary;
		}
		void display()
		{
			cout<<"Id: "<<ID<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Position: "<<position<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
};
int main()
{
	Employee E1;
	E1.set();
	E1.display();
	return 0;
}