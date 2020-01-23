
	#include<iostream>
	using namespace std;
	
	class Rect
	{
		private:
		int length;
		int breadth;
		public:
		Rect()
		{
			length=0;
			breadth=0;
		}
		Rect( int l, int b)
		{
			this->length=l;
			this->breadth=b;
		}
		friend ostream & operator <<(ostream &out , Rect &x);
	};
	ostream & operator <<(ostream &out , Rect &x)
	{
		Rect out;
		out<<"\n length"<<x.length;
		out<<"breadth"<<x.breadth;
		return out;
	}
	
	int main()
	{
		Rect obj1(44,55);
		Rect obj2(66,77);
		
		cout<<obj1<<obj2;
			return 0;
	}
