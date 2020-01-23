	#include<iostream>
	using namespace std;
	
	void change(int t) // int t = temp
	{
		t=t+10;
		cout<<"\n after inc t"<<t;
	}
		int main()
	{
	int temp=45;
	
	 change(temp);              // call by value
	 
	 cout<<"\n after call of change"<<temp;	
	
	 return 0;	
		}
