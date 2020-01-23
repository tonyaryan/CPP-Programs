	#include<iostream>
	using namespace std;
	
	void change(int &t) // int &t = temp
	{
		t=t+10;
		cout<<"\n after inc t"<<t;
	}
		int main()
	{
	int temp=45;
	
	 change(temp);              // call by reference
	 
	 cout<<"\n after call of change"<<temp;	// read write or change value
	
	 return 0;	
		}
