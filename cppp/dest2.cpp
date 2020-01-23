	// objects in Destructor are displayed in LIFO order..(Last in forst out)= Last will be displayed first & first at last 
	#include<iostream>
	using namespace std;
	
	class Rect
	{
	  private:
	  	int length;
	  	int breadth;
	  public:
	   Rect()
	   {
	   	  length =0; 
	   	  breadth=0;
		  }   
	   Rect (int l, int b)
	   {
		cout<<"\n 2 param constructor";
	   	length=l;
	   	breadth=b;
	   }
	   ~Rect()
	   {
	   	cout<<"\n Destructor section";
	    cout<<"\n LENGTH "<< length <<" BREADTH  "<<breadth;
	   }
	   
	   };
	   
	    int main()
	   {   int age=19;
	   	  Rect obj1(10,20);
            if (age>18)
            {                              // bydefault auto storage class , if {(object)} will run first
	   	     static Rect obj2(30,40);           //    but here if we add static(before object) then static will run at last   	  
  			}		                     
		 Rect obj3(50,60);
		  cout<<"\n Exiting from main";
	   	return 0;
	   }
