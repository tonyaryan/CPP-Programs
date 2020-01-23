// Multiplelevel Inheritance
// from this example we get to know order of constructor get fired.
	#include<iostream.h>

	class A
	{
	 public:
	  A()
	  {
	  cout<<"\n A";
	  }
	};

	class B
	{
	 public:
	  B()
	  {
	  cout<<"\n B";
	  }
	};

	class C : public B, public A
	{
	 public:
	  C()
	  {
	  cout<<"\n C";
	  }
	 };
	  int main()
	  {
	     C obj;
	  return 0;
	  }



