	#include<iostream>
	using namespace std;
	
	class Bank
	{
	public:
		static void Open()
		{
			cout<<"Bank open";
		}
		static void Close()
		{
			cout<<"\n Bank Closed";
		}
	};
	
	int main()
	{
		Bank::Open();        // using static member function we can call it without object also
		Bank:: Close();
		                         // or we can call it with object like { Bank cust; cust.Open(); }
		return 0;
	}
	
