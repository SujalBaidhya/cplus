//WAP to make two class named Rupees and Dollar(starting name of class strictly capital),in rupees make a private variable called rs and in dollar class make a private variable called d
//Make dollar class friend of rupees class and calculate/convert dollar into nepali inside dollar class using concept of friend class
#include<iostream>
using namespace std;
class Rupees
{
	private:
		int rs;
		friend class dollar;
	public:
		void valueset()
         {
         	rs=130;
         
		 }
};
class dollar
{
	private:
	int d;
	public:
		void valueset()
		{
			cout<<"Enter dollar:";
			cin>>d;
		}
		void conversion(Rupees a)
		{
			int con;
			con=d*a.rs;
			cout<<"The conversion is:"<<con;
		}
	
};
int main()
{
	Rupees RuCon;
  	dollar DollarCon;
    RuCon.valueset();
  	DollarCon.valueset();
  	DollarCon.conversion(RuCon);
  	return 0;
}