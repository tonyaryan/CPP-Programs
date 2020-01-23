	// example of friend function with Template class
	// this isn't running in dev  , try in turbo c++
	#include<iostream>
	using namespace std;
	
	template <class T> class Rect
	{
		private:
		T length;
		T breadth;
		
		public:
		Rect()	
		{
			length=0;
			breadth=0;	
		}	
		Rect ( T x, T y)
		{
			length=l;
			breadth=b;
		}
     	friend ostream & operator <<( ostream &out , Rect <T> &x);
     	friend istream & operator >>( istream &in , Rect<T> & x);
	};
    
       ostream & operator <<( ostream &out , Rect<T> &x)
         {
         	out<<"\n length= "<<x.length;
         	out<<"\n breadth= "<<x.breadth;
		   return out;
		 }
		istream & operator >>( istream &in , Rect<T> &x)
		{
			cout<<"\n Enter length";
			in>>x.length;
			cout<<"\n Enter breadth";
			in>>x.breadth;
		  return in;
		}
		
		int main()
		{
			Rect <int> obj1;
			in>>obj1;
			out<<obj1;
			  Rect <double> obj2;
			  in>> obj2;
			  out<<obj2;
			return 0;
		}
