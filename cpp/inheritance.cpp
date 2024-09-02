<<<<<<< HEAD
#include<iostream>
using namespace std;
class dad
{
	private:
		int pri;
	public:
		int pub;	
	void setpro(int y)
	{
		pro=y;
	}
	protected:
		int pro=0;
	
};
class son:public dad
{
	public:
	int sum;
	void add()
	{
		sum=pub+pro;
	}
	void setpub(int x)
	{
		pub=x;
	}
};
int main()
{
	dad b;
	son A;
	A.setpro(4);
	A.setpub(2);
	//A.setpro(4);
	A.add();
	cout<<A.sum;
	return 0;
=======
#include<iostream>
using namespace std;
class dad
{
	private:
		int pri;
	public:
		int pub;	
	void setpro(int y)
	{
		pro=y;
	}
	protected:
		int pro=0;
	
};
class son:public dad
{
	public:
	int sum;
	void add()
	{
		sum=pub+pro;
	}
	void setpub(int x)
	{
		pub=x;
	}
};
int main()
{
	dad b;
	son A;
	A.setpro(4);
	A.setpub(2);
	//A.setpro(4);
	A.add();
	cout<<A.sum;
	return 0;
>>>>>>> 7c76e86b20acf6599b48e47dc426ba3d4c38aaec
}