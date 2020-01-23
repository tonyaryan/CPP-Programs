	#include<iostream>
	#include<string.h>
	using namespace std;
	
	class Student 
	{
		private:
		char name[20];
		long phno;
		static char course[20];
		static char time[20];	
		
		public:
		void addrecord()
		{
			cout<<"Enter name"; cin>>name;
			cout<<"\n Phone Number"; cin>>phno;
		}
		void show()
		{
			cout<<" "<<name<<"  "<<phno<< "  "<<course<<"     "<<time;
		}
		void contact( long y)
		{
			phno=y;
		}
		static void chngtime( char z[])
		{
			strcpy(time, z);
		}
		static void chngcourse( char x[])
		{
			strcpy(course, x );
		}  
	};
	  char  Student :: course[]= "Phython";
	  char  Student :: time[]= "2:00PM";
	  
	  int main()
	  {
	  	Student obj1; obj1.addrecord();
	  	Student obj2; obj2.addrecord();
	  	Student obj3; obj3.addrecord();
	  	                                                    
	  	cout<<"\n obj1.."; obj1.show();
	  	cout<<"\n obj2.."; obj2.show();
	  	cout<<"\n obj3.."; obj3.show();
	  	
	  	Student :: chngtime ("3:00PM");
		Student :: chngcourse("JAVA");                          
	  	cout<<"\n obj1.."; obj1.show();   
	  	cout<<"\n obj2.."; obj2.show();
	  	cout<<"\n obj3.."; obj3.show();
	  	
	  	return 0;
	  }
