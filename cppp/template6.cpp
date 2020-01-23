// template function overloading 
// if we define multiple template functions wuth same name but diff. set of arguments
 	 
	#include<iostream>
    using namespace std;
 	
 	template <class T> T sum(T x, T y)
 	{
 		return x+y;
	}

 	template <class T> T sum(T x, T y, T z)
 	{
 		return x+y+z;
	}

	 
	 int main()
	 {
	 	
	 	cout<<"\n sum (23,45)" <<sum(23,45);
	 	cout<<"\n sum (23,45,55)" <<sum(23,45,55);
	    cout<<"\n sum (78000,45000)" <<sum(78000,45000);	
	 	cout<<"\n sum (2.3,4.5)" <<sum(2.3,4.5);	 	
	 	
	 	return 0;
	 }
