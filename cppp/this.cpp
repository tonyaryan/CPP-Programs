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
			length=0; breadth =0;
		}
		Rect (int l, int b )
		{
			length=l;
			breadth=b;
		}
		void show()
		{
			int length=100; int breadth=200;
			cout<<"\n length"<<this->length;         // now here output will be 100,200 but obj has passed 10,20 
			cout<<"\n breadth "<<this->breadth;      // to avoid such mistakes in program always use this pointer
		}
	};                       
	
	int main()
	{
		Rect obj(10,20);
		obj.show();
		return 0;
	}
