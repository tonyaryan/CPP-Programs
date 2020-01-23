	#include<iostream>
	using namespace std;
	
	class Rect
	{ private:
		int length;
		int breadth;
		
	  public:
	  	void setData( int l, int b)
	  	{
	  		length=l;
	  		breadth=b;
		  }
	     void setData ( )
	     {
	     	cout<<"\n Enter the length";
	     	cin>>length;
	     	cout<<"\n Enter breadth";
	     	cin>>breadth;
		 }
	      void show()
	      {
	      	cout<<"\n length"<<length <<"\n breadth"<<breadth;
		  }
	};
	  int main()
	    {
	    	Rect obj;
	    	obj.setData();
	    	obj.show();
	         
	         Rect obj2;
	           obj2.show()
	 	  
	 	  return 0;
		   	 }
		
	
