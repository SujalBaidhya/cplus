#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	string dat;
	fstream write;
	write.open("info.txt",ios::out);
	cout<<"Enter your sentence:";
	getline(cin,dat);
	write<<dat<<endl;
	write.close();
	
	fstream read;
	read.open("info.txt",ios::in);
	getline(read,dat);
	cout<<dat<<endl;
	int vowelc=0,i=0;
	for (i=0;i<dat.length();i++)
	{
		if(dat[i] == 'a'|| dat[i]  == 'e' ||dat[i]  == 'i' ||dat[i]  == 'o' ||dat[i]  == 'u')
		{
			vowelc+=1;
		}
	}
	cout<<vowelc;
	return 0;
}