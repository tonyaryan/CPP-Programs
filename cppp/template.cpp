	#include<iostream>
	using namespace std;
	
	template <class T> class Rect    // syntax of creating template class 
	                                 // here T is type parameter .. we can pass datatype to clas Definiton 
	{                                // we can only take letter for first postion of type parameter.    
		private:
			T length;
			T breadth;
			
		public:
		 void getData()
		 {
	       cout<<"\n Enter length";
		   cin>>length;
		   cout<<"\n Enter breadth";
		   cin>>breadth;	 	
	     }	  
	     void showData()
	     {
	     	cout<<"\n Length="<<length;
	     	cout<<"\n Breadth="<<breadth;
	     }
	     
	     
	};
	
	int main()
	{
		Rect <double> obj;   // syntax for creating object of required type
		obj.getData();
		obj.showData();
		
		Rect < int > obj1;
		obj1.getData();
		obj1.showData();
		
		Rect <long> obj2;
		obj2.getData();
		obj2.showData();
		return 0;
	}
