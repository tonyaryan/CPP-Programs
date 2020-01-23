	
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
	
	char *sum(char x, char y)
	{
	     char arr[3];   // bcoz 2 char + 1 null
	      arr[0]=x;
	      arr[1]=y;
	      arr[2]='\0';
	      return arr;
	 
	}
	int main()
	{
		//cout<<"\t\t sum of(3,4) "<<sum(3,4);
		//cout<<"\t\t sum of(3,4) "<<sum(3,4,7);
		cout<<"\t\t sum of('A','B') "<<sum('A','B');
         return 0;
	}
	
	//C++ compiler automatically finds out correct def. for overloaded func.
	//it took int itself rather than double bcoz ..A+B is 131 is int form
	
	
	 
