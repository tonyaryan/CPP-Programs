		// objects in Destructor are displayed in LIFO order..(Last in forst out)= Last will be displayed first & first at last 
	   // in this example we will see that DESTRUCTOR runs after show function call & just before exitng of program(each time 
	   // in loop ; for this case):::::: 
	   
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
	   void show()
	   {
	   	cout<<"\n length " <<length<<" breadth "<<breadth; 
	   }
	   };
	   
	    int main()
	   {  
	       for(int i=0; i<=2; i++)  
	    	 {
			   Rect obj1(10,20);
			    obj1.show();
        	 }
		  cout<<"\n Exiting from main";
	   	return 0;
	   }
