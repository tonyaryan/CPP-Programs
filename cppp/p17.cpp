	#include<iostream>
	using namespace std;
		
		long intcalc(long p, long r, long t=2)        //t=2 is by default argument
		{
			return (p*r*t)/100;
		}
		 int main()                                          
		 {                                                 
		 	cout<<"\n intcalc(1200,7,4)"<<intcalc(1200,3);             //value shouldnt be empty in right hand side
		 	
		    cout<<"\n intcalc(1200,7)"<<intcalc();
		 	
	    	 cout<<"\n intcalc(1200)"<<intcalc(1200);
		 	
			 cout<<"\n intcalc()"<<intcalc();
		 	 
		 	 return 0;
		 		 }
