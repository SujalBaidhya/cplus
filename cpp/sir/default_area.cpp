#include<iostream>
using namespace std;

int area(int l, int b=10)
{
	return l*b;
}

int main()
{
	cout<<"Area: "<<area(100);
}