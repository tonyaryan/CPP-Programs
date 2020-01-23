	// syntax for non inline functions template 
	#include<iostream>
	using namespace std;
	
	template < class T , int sz > class Array
	{
		private:
			T arr[sz];
		public:
		void getData();
			
		void show();
		
	};
	template <class T, int sz> void Array <T,sz> :: getData()
		{
	     for( int i=0; i<sz ; i++)
		      {
		      cout<<"\n Enter array element";
		      cin>>arr[i];
			   }		   		
		}
   template <class T , int sz > void Array<T , sz> :: show()
		{
		  for( int i=0; i<sz ; i++)
		  {
		  	cout<<"\n ["<<i<<"] ="<<arr[i];
		  }
		}

	
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
