	#include<iostream>
	using namespace std;
	
	class Rect
	{
		private:
			float length;
			float breadth;
			
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
		Rect obj;
		obj.getData();
		obj.showData();
		
		return 0;
	}
