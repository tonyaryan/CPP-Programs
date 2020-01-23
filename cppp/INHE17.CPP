	// example of upcasting - Calling child class object by Parent class
	#include<iostream.h>

	class Parent
	{
	public:
	void riding()
	{
	cout<<"\n riding with non alloy wheel bike";
	}
	};

	class Child  : public Parent
	{
	public:
	void dance()
	{
	cout<<"\n child dances too..";
	}
	};
	int main()
	{
	   Child obj;
	   Parent *ptr= &obj;
	   (*ptr).riding();   //or ptr->biking();

 //   ptr->dance(); here we cant call dance function as it is not present in
 //   Parent (or not inherited from Parent class)..


	return 0;
	}
