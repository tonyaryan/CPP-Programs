	#include<iostream>
	using namespace std;
	
	template < class T , int sz > class Array
	{                                                                                                               								
		private:
			T arr[sz];   
		public:
		void getData()
		{
	     for( int i=0; i<sz ; i++)
		      {
		      cout<<"\n Enter array element";
		      cin>>arr[i];
			   }		   		
		}	
		void show()
		{
		  for( int i=0; i<sz ; i++)
		   {
		  	cout<<"\n ["<<i<<"] ="<<arr[i];
		   } 
		}
	};
	
	int main()
      {
      	Array <int ,3 > obj;
		  obj.getData();
		  obj.show();
		   
      	Array < char ,4 > obj1;
      	   obj1.getData();
      	   obj1.show();
      	   
      	return 0;
		  }			  
