	#include<iostream>
	#include<string.h>
	using namespace std;
	
	int initID()
	{
		static int val;
		cout<<"\n enter init ID";
		cin>>val;
		return val;
	}
	
	class Robot
	{
	   private: 	
	   char name[20];
	   const int id;
	   static int  counter;
	   public:
	   Robot () : id (counter++)
	   {
	   	strcpy(name,"noname");
	   }
	   Robot (const char *ptr) : id( counter++)
	   {
	   	strcpy(name,ptr);	
		} 
		Robot (const Robot &x) : id(counter++)
		{
			strcpy(name,x.name);
		}
		void show()
		{
			cout<<"\n id"<<id <<" name "<<name;
		}	
	};
	int Robot :: counter= initID();
	
	int main()
	{
		Robot obj1("CHITTI");
		Robot obj2("RA-One");
		Robot obj3("KRRISH");
		
		cout<<"\n obj1";  obj1.show();
		cout<<"\n obj2";  obj2.show();
		cout<<"\n obj3";  obj3.show();
	//	cout<<"\n obj4";  obj4.show();
	//	cout<<"\n obj5";  obj5.show();
		
		return 0;
	}
