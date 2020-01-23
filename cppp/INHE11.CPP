	#include<iostream.h>

	class Parent
	{
	 private:
	 void smoking()
	 {
	 cout<<"\n He does smoke secretly..";
	 }
	 protected:
	 void backbiting()
	 {
	 cout<<"\n behind everyone he backbites abt people";
	 }
	 public:
	 void talking()
	 {
	 cout<<"\n talking is what everyone does in public ";
	 }
	};

	class Child : private Parent   //mode of inheritance is private
	{
	public:
	void getdetails()
	{

	  talking();
	  backbiting();
	 // smoking();

	}
	};

	int main()
	{
	Child sachin;

	sachin.getdetails();   // none of the function call is acccessible
	return 0;
	}