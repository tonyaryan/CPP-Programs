  // Proof of that inside cpp there is no such thing as template , cpp creates meta info as many times as datatype will be supplied
  	
	
	#include<iostream>
	using namespace std;
	
	template <class T> class Rect
	{
		private:
		T length;
		T breadth;
		
		public:
		static T counter;
		Rect()
		{
			length= 0;
			breadth= 0;
		}
		Rect ( T l , T b)
		{
			length= l;
			breadth=b;
		    counter++;
		}
		void show()
		{
			cout<<"\n  "<<length<<"  "<<breadth;
		}
	};
	template <class T> T Rect <T> :: counter;
	
	int main()
	{
		Rect <int> obj1(22,33);
		Rect <double> obj2(22.3,44.5);
		Rect <int> obj3(22,33);
		Rect <double> obj4(22.6,44.6);
		obj1.show();
		obj2.show();
		
		cout<<"\n &obj1"<<&obj1.counter;  // this shows address of int type of obj1 and obj3 is same
		cout<<"\n &obj2"<<&obj2.counter;  // similarly address of double type of obj2 and obj4 is same 
		cout<<"\n &obj3"<<&obj3.counter;
		cout<<"\n &obj4"<<&obj4.counter;
		
		return 0;
	}	
