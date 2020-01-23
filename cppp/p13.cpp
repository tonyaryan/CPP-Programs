	
	#include<iostream>
	using namespace std;
	 int sum( int x, int y)
	{
		cout<<"sum of 2 int..";
		return x+y;
		
		
	}
	int sum(int x , int y, int z)
	{
		cout<<"\n Sum of 3 int";
		return x+y+z;
		
	}
	
	double sum(double x, double y)
	{
		cout<<"\n sum of 2 double ";
		return x+y;
		
	}
	int main()
	{
		cout<<"\t\t sum of(3,4) "<<sum(3,4);
		cout<<"\t\t sum of(3,4) "<<sum(3,4,7);
		cout<<"\t\t sum of(3.6,4.6) "<<sum(3.6,4.6);
         return 0;
		
	}
	
	//C++ compiler automatically finds out correct def. for overloaded func.
