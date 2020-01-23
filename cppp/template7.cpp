	//           TEMPLATE FUNCTION SPECIALIZATION   
	#include<iostream>
	using namespace std;
	
	template <class T> T sum( T x, T y)
	{
		return x+y;
	} 
	// we saw in this case that bydefault cpp will sum the ASCII value of two characters when put on the sum function
	// to avoid this we use concept of  TEMPLATE FUNCTION SPECIALIZATION :
	// in order to do so
	
	char *sum(char x , char y)
	{
	  static char arr[3];
	  arr[0]= x;
	  arr[1]=y;
	  arr[2]='\0';
	  		     	
	 return arr;	
    }
	
	int main()
	{
		cout<<"\n sum('a','b') "<<sum('a','b');
		
		return 0;
	}
