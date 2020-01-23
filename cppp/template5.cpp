 	 #include<iostream>
 	using namespace std;
 	
 	template <class T> T max1(T x, T y)
 	{
 		return x> y? x:y;
	 }
	 
	 int main()
	 {
	 	
	 	cout<<"\n max (23,45)" <<max1(23,45);
	    cout<<"\n max (78000,45000)" <<max1(78000,45000);	
	 	cout<<"\n max (2.3,4.5)" <<max1(2.3,4.5);	 	
	 	
	 	return 0;
	 }
