	
	#include<iostream>
	#include<maloc>

	#include<string>
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
	    static char arr[3]   // bcoz 2 char + 1 null
	      arr[0]=x;
	      arr[1]=y;
	      arr[2]='\0';
	      return arr;
	 
	}
	int main()
	{
		char *sum (char *str1,*str2)
			char arr[20];
			
			(char*) malloc(strlen(str1)) +strlen(str2) +1;
			
			 strcpy(arr,str1);
			 strcat(arr, str2);
		       return 0;
		
			cout<<"\t\t sum of('A','B') "<<sum('A','B');
         
         cout<<"\n  \t\t sum(\"arun\",\"gupta\")="<<sum("arun","gupta");
		 return 0;
	}
	
	//C++ compiler automatically finds out correct def. for overloaded func.
	//it took int itself rather than double bcoz ..A+B is 131 is int form
	
	
	 
