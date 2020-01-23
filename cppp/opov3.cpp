	#include<iostream>
	using namespace std;
	
	class Rect
	{ private:
		int length;
		int breadth;
		
	  public:
	 	 Rect()  
	 	 {
	 	 	length=0;
	 	 	breadth=0;	
		}
		  Rect ( int l , int b) 
		  {
		  	length =l ; breadth =b;
		  }	 			  	 	 
	    Rect & operator =( Rect &x )
	      	{
	      		this->length=x.breadth*2;
	      		this->breadth=x.breadth*2;
				return *this;
			}	  	
	  void show()
	  {
	  	cout<<"\n length"<<length<<"\n breadth"<<breadth;
	  }
	 };
      		
	      	
	  int main()
	    {
	    	Rect obj1(10,20);
	    	obj1.show();
			Rect obj2;
	    	   obj2=obj1;
	    	          // left hand side is caller
	    	 obj2.show();         
	    	   return 0;
		}
	
	
	
	
