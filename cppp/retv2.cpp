	// example of Return of reference variable 
	#include<iostream>
	using namespace std;
	int & afun()          // in this case it will provide same address value 
	{
		static int x=12390;
		cout<<"\n in a fun"<<&x;
	    return x;
	}
	
	int main()
	{
		int &res=afun();
		
		cout<<"\n in main "<<&res;
		cout<<"\n Value of res"<<res;
		return 0;
	}
