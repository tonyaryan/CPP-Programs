	#include<iostream>
	
	using namespace std;
	int main()
	{
		
		int x=88;
		int *ptr;    // decl of pointer
		ptr=&x;      // initilazation of pointer 
		
		cout<<"\n x= "<<x;
	
		cout<<"\n &x= "<<&x;     //cpp will show memory loc in hexaform
	
		cout<<"\n ptr= "<<ptr;   // requesting address value from pointer
	
		cout<<"\n *ptr= "<<*ptr;   // pointer dereference in cpp , no need of format specifier
	
		//cout<<"\n ptr= "<<(unsigned)ptr; //****(unsigned) to show value in integer form rather than hexa form in turboC 
		
	     *ptr= 54;                    // changing content of addressed mem. loc 
		  
		  cout<<"\n x = "<<x;			
				
				return 0;
	}
