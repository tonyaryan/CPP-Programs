	#include<iostream>
	using namespace std;

	class Parent
	{
	private:
	int pri_money;
	protected:
	int pro_money;
	public:
	int pub_money;

	Parent()
	{
	 pri_money=1000;
	 pro_money=2000;
	 pub_money=3000;
	}
	};
	class Child: public Parent
	{
	 public:
	 void checkBal()
	 {
       // cout<<"\n "<<pri_money;   (this is in comments to show private aren't accessible
	 cout<<"\n "<<pro_money;
	 cout<<"\n "<<pub_money;
	 }
	};
	int main()
	{

	 Child obj;
	 obj.checkBal;

	return 0;
	}
