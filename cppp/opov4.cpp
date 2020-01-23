	#include<iostream>
	#include<string.h>
	using namespace std;
	
	class Student
	{
		private:
		char name[20];
		int age;	
		public:
		Student()
		{
			strcpy(name,"no-name");
			age= 0;
		}	
		Student (const char nm[] , int x)
		{
		  strcpy(name,nm);  ; age=x;		
		} 
		
		friend ostream 	& operator <<(ostream &out , Student &s);
		friend istream  & operator >>(istream &in  , Student &s );
		
	};
	
	ostream & operator <<(ostream &out , Student &s)
	{
		out<<"\n name="<<s.name <<"age"<<s.age;
		return out;
	}
	istream & operator >>(istream &in , Student &s)
	{
		cout<<"\n Enter ur name";   in>>s.name; 
		cout<<"\n Enter ur age";    in>>s.age;   
        return in;
	}
    int main()
    {
    	 Student obj1("yash"   ,22);
         Student obj2("kashish",21);
    	
    	cout<<obj1<<obj2;
    	
		Student obj3;
    	cout<<"\n Details of obj3";
		cin>>obj3;
		
		cout<<obj3;
    	return 0;
	}
    
