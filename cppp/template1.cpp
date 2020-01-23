	#include<iostream>
	using namespace std;
	
	template <class T1 , class T2> class Rect    // syntax of creating template class 
	                                 // here T is type parameter .. we can pass datatype to clas Definiton 
	{                                // we can only take letter for first position of  type parameter.    
		private:
			T1 length;
			T2 breadth;
			
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
		Rect <int , double> obj;   // syntax for creating object of required type
		obj.getData();
		obj.showData();
		
		return 0;
	}
