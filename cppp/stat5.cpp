	// example of static variable in static function .. note static function can only take static variable
	#include<iostream>
	using namespace std;
	
	class Bank
	{  private:
		static int bal;
	public:
		static void show()
		{
			cout<<"Bank Balance"<<bal;
		}	
	};
	int  Bank:: bal=2222; 
	int main()
	{
		Bank::show();
		
			return 0;
	}
	
