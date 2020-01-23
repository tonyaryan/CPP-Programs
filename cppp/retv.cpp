		// example of Returning value   
		
		#include<iostream>
		using namespace std;
		
		class Rect
		{
		   private:
		   	int length;
		   	int breadth;
		   	
		   	public:
		    Rect ()
		    { length =0;
			  breadth= 0;
			}
			Rect (int l, int b )
			{  length = l;
			   breadth = b;  
			}
			Rect sum( Rect &x)
			{
			  Rect s;
			  s.length= length + x.length;
			  s.breadth= breadth + x.breadth;
			  return s; 	
			 } 	
			 void show()
			 {
			 	cout<<"\n length"<<length << "\n breadth"<<breadth;
			 }			 
		};
		
		int main()
		{
			Rect obj1(10,20);
			Rect obj2(30,40);
			Rect obj3= obj2.sum(obj1);
			
			obj3.show();
			return 0;
		}
		
		
