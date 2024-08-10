#include<iostream>
using namespace std;
int main()
{
	float m=9.99;
	int n;
	int a=9;
	float b;
	//implicit type conversion
	n=m;
	cout<<"Implicit type conversion: "<<n<<endl<<endl;
	n=0;
	//explicit type conversion
	//cast notation
	n=(int)m;
	cout<<"Cast notation: "<<n<<endl<<endl;
	n=0;
	//funtion-style notation
	n=int (m);
	cout<<"Funtion-style notation: "<<n<<endl<<endl;
	//type conversion operators
	//static_cast
	n=static_cast <int>(m);
	cout<<"Static_cast: "<<n<<endl<<endl;
	//reinterperet_cast
	int *p;
	int d=65;
	p=&d;
	char *q;
	q=reinterpret_cast<char *>(p);
	cout<<"Reinterperet_cast:"<<endl;
	cout<<"Int type pointer:"<<*p<<endl;
	cout<<"Char type pointer:"<<*q<<endl;
	//output will be 65 and A
	return 0; 
}