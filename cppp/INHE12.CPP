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

	class Child : protected Parent   //mode of inheritance is protected
	{
	public:
	void getdetails()
	{
    //	 talking();
    //	backbiting();
    //  smoking();
	}
	};

	int main()
	{                 //bcoz what is protected of Parent class
	Child sachin;     //isnt  protected or public
			  // to the main...

	sachin.talking();// none of behaviour  is accessible

	   //but we can access public &  private by calling
	   // sachin.getdetails()

	return 0;
	}
