							//Operator Overloading example with use of this Pointer
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
			length=0; breadth=0;			
		}			
		Rect(int l, int b)
		{	length=l;
			breadth=b;				
		}		
		Rect operator +(Rect &x)
		{
			Rect temp;
			temp.length= this->length + x.length;
			temp.breadth=this->breadth+ x.breadth;
			return temp;
		}
		Rect operator -(Rect &x)
		{
			Rect temp;
			temp.length= this->length - x.length;
			temp.breadth=this->breadth- x.breadth;
			return temp;
		}
		void show()
		{
			cout<<"\n length"<<length<< " breadth"<<breadth;
		}
		int operator >(Rect &x)
		{
			int a1= this->length * this->breadth;
			int a2= x.length * x.breadth;		
			return a1>a2;
		}
		int operator <(Rect &x)
		{
			int a1= (*this).length * (*this).breadth;
			int a2= x.length  * x.breadth;
			return a1<a2;
		}
		int operator ==( Rect &x)
		{
			int a1= (*this).length  * (*this).breadth;
			int a2= x.length * x.breadth;
			return a1==a2;
		}
		Rect operator++()
		{
			cout<<"\n for perfix";
			this->length+=1;
			this->breadth+=1;		
			return *this;
		}
		Rect operator ++(int)
		{
			cout<<"\n for postfix";
			Rect y;
			y.length=this->length;
			y.breadth= this->breadth;
			
			this->length+=1;
			this->breadth+=1;
			return y;
		}
		
	};
		int main()
		{
			Rect o1(4,5);
			Rect o2(5,4);
			Rect o3;
			o3=o1+o2;
			o3.show();
				
			Rect o4;
			o4=o2-o1;
			o4.show();
					
			if(o1>o2)
			{
				cout<<"\n area wise a1>a2";
			}
			else if( o1==o2)
			{
				cout<<"\n Both area same";				
			}			
			else
			{
				cout<<"\n area wise a2>a1";
			}			
			Rect o5;
			o5= ++o1;     // ++o1()
			cout<<"\n details of o1";
			o1.show();
			cout<<"\n details of o5";
			o5.show();
			
			Rect o6;
			 o6= o2++;
			 cout<<"\n details of o1";
			 o2.show();
			 cout<<"\n details of o6";
			o6.show();
			
			return 0;
			}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
