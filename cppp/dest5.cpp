	// this is example of NON DYNAMIC OBJECT:: 
	// in this type of object we can't  destruct object from memory ((select the working of destructor))
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
	   	Rect obj(100,200);
	   	cout<<"\n 1..";
	   	cout<<"\n 2..";
	   	cout<<"\n 3..";
	   	cout<<"\n 4..";
	   	cout<<"\n 5..";
		cout<<"\n 6..";
		cout<<"\n 7..";
		cout<<"\n 8..";
		cout<<"\n 9..";
		
		cout<<"\n exiting from main";
		return 0;
	   }
		
