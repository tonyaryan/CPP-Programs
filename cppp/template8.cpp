	#include<iostream>
	using namespace std;
	
	template < class T> class Rect
	{
		private:
		T length;
		T breadth;
		
		public:
		Rect()
		{
		  length=0; breadth=0;
		}
		Rect ( T l, T b)
		{
			this->length=l;
			this->breadth=b;
		}
		
		Rect operator +( Rect &x)
		{
			Rect <T> temp;  // type parameter  syntax
			
			temp.length= this->length  + x.length;
			temp.breadth=this->breadth + x.breadth;
		    return temp;
		}
		
		void show()
		{
			cout<<"\n length= "<<this->length;
			cout<<"\n breadth= "<<this->breadth;
			
		}
	};
		int main()
		{
			Rect <int> obj1(22,33);
			Rect <int> obj2(22,44);
			Rect <int> res;
			res= obj1 + obj2;    // here res obj3= obj1.sum(obj2);
			res.show();
			
			return 0;
		}
		
			
		
		
		
		

