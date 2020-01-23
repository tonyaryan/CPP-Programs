// Hyrid level inheritance : also Diamond Shape
	#include<iostream.h>

	class A
	{
	public:
	  A()
	  {
	  cout<<"\n A";
	  }
	};

	class B: public A
	{
	 public:
	  B()
	  {
	  cout<<"\n B";
	  }
	};

	class C: public A
	{
	 public:
	 C()
	 {
	  cout<<"\n C";
	 }
	 };

	 class D: public B, public C
	 {
	   public:
	   D()
	   {
	   cout<<"\n D";
	   }
	 };

	  int main()
	  {
	    D  obj;
	  return 0;
	  }
