	#include<iostream>
	using namespace std;
	
	class Person
	{
		private:
		long money;
		public:
		  Person()
		  {
		    money=12000;  	
		   }
		  
		  friend void nirmalbaba(Person &x);
		  friend void ramdevbaba(Person &x);		
	};
	
	  void nirmalbaba(Person &x)
	  {
	  	cout<<" at Nirmal Samagan"<<x.money;
	  }
	  void ramdevbaba(Person &x)
	  {
	  	cout<<"\n with ramdev"<<x.money;
	  }
	  
	  int main()
	  {
	   Person kaka;
	   	nirmalbaba(kaka);
	 	ramdevbaba(kaka);	  
	  
	  return 0;
	  }
