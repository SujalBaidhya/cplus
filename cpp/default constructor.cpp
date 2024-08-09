#include<iostream>
using namespace std;
class defalt
{
	private:
		int *poin;
	public:
			
		defalt()
		{
			poin=new int;
			*poin=3;
			cout<<*poin<<endl;
		}
	//  deafult copy constructor not called then the pointer points to same address so the value changes when value of other object is changed	
	//	defalt(defalt &first)
	//	{
	//		poin=new int;
	//		*poin=*(first.poin);
	//	}
		void change()
		{
			*poin+=2;
		}
		void see()
		{
			cout<<*poin<<endl;
		}
		~defalt(){
			delete poin;
			cout<<"destructor called"<<endl;
		}
		
		
};
int main()
{
	defalt first;
	defalt second(first);
	second.see();
	second.change();
	second.see();
	first.see();
	return 0;
}