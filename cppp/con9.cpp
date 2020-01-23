	// object as an input in constructor or function 
	#include<iostream>
	using namespace std;
	
	class Person
	{
		public:                //here we hav taken instance var public bcoz its function (baba) is out of class
		
			int money;
		Person()
		{
			money =2000;
		}	
		void showBal()
		{
			cout<<"\n money left"<<money;
			}	
    };
		void Baba(Person *x)               // here input taken as Pointer value (more clearity in notes)
		{
			cout<<"\n after meeting baba";
			(*x).money=(*x).money-2000;
			}	
		
	   int main()
	   {
	   	Person obj;
	   	obj.showBal();
	   	
	   	Baba(&obj);
	   	obj.showBal();
	   	return 0;
	   }
	
	
