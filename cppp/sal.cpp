	#include<iostream>
	using namespace std;
	
	int main()
	{
		int days,hours,overtime,sal;
		
		cout<<"\n Enter number of days";
		cin>>days;
		
		cout<<"\n Enter the number of overtime hours";
		cin>>overtime;
		
		sal=days*9*1200;
		sal=sal+ (overtime*1500);
		
		cout<<"\n Salary = "<<sal;	
		
		return 0;
	}
