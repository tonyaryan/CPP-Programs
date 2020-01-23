     // Return by value example in cpp
	#include<iostream>
	using namespace std;
	int afun()
	{
		int x=12390;
		cout<<"\n in a fun"<<&x;
	    return x;
	}
	
	int main()
	{
		int res;
		res= afun();
		cout<<"\n in main "<<&res;
		cout<<"\n Value of res"<<res;
		return 0;
	}
