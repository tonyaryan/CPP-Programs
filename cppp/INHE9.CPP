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

	class Child : public Parent
	{
	public:
	void getdetails()
	{
		talking();          // yes accessible
		backbiting();  // yes accessible
      //	smoking();  // private  not accessible
	}
	};
	int main()
	{
	 Child sachin;

	 sachin.getdetails();   // we can access private or protected ..
				// through function call
	 return 0;
	}