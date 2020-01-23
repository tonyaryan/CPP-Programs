	// static variable gets shared to each member of class ; also it will produce latest value in output
	#include<iostream>
	using namespace std;
	class Alpha
	{
	  private:
	  	       int x;
	  	static int y;
	  public:
	  	Alpha()
	  	{
	  		x=0;
		  }
		 
		 void increment ()
		 {
		 	x++;
		 	y++;
		   }  
		  void show() 
        {
		cout<<"\n x "<<x<<" y "<<y;
		}
	};
	int Alpha :: y=0;
	
	int main()
	{
		Alpha a1,a2,a3;
		a1.increment();
		a2.increment();
		a3.increment();
		a1.show();
		a2.show();
		a3.show();
		
		return 0;
	}
	
