// Multiplelevel Inheritance.
// using friend function we can access private member of another class
	#include<iostream.h>

	class A
	{
	 private:          // here A is private modifier
	  A()
	  {
	  cout<<"\n A";
	  }
	//  friend class B;
	};

	class B: public A
	{
	 public:
	  B()                  //.. cpp cant access private member
	  {                   // but we can make class A friend of class B
	  cout<<"\n B";
	  }
	};

	  int main()
	  {
	    B obj;
	  return 0;
	  }



