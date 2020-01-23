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
		  friend class Ashram;
	};
	 class Ashram
	 { public:
	  static void nirmalbaba(Person &x)
	  {
	  	cout<<" at Nirmal Samagan"<<x.money;
	  }
	  static void ramdevbaba(Person &x)
	  {
	  	cout<<"\n with ramdev"<<x.money;
	  }
	 };
	  int main()
	  {
	   Person ramesh;
	   	Ashram ::nirmalbaba(ramesh);
	 	Ashram ::ramdevbaba(ramesh);	  
	  
	  return 0;
	  }
