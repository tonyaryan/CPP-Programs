		// basic skelton of C++ program
		
		#include<iostream>
		using namespace std;
				
				
		int main()    // header section 
		{
		 	
		cout<<"hello" ; // printf("hello");	
		
		/*
	      # here cout is the builtin object of cpp ::  it stands for "Console output"
		  # this obj is declared somewhere in iostream.h
		  # it is a global scope object
		  # cout is a buffer obj   
          # "<<" is operator of cpp , is called insertion operator ; its left hand side operand must be cout
		    & its RHS can be value of any datatype  
		  # "working" of << is to forward instructions to cout 
		  # "output" of cout is LHS operand..	 
		  # cout can be thinked as representative of our std output i.e. monitor
		  
		    cout<<"hello"<<10;  
	        cout <<10	 
		*/	
		cout<<"hello"<<222<<"\n"<<"Ava";
		cout<< "\n";  
		cout<< 23;
		cout<<"\n";
		cout<<"4.5";	   	
		
		   return 0;
		}
		
		
		
