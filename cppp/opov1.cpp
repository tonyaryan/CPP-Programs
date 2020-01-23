	#include<iostream>
	using namespace std;
	
	class Person
	{
		private:
		int money;
		public:
		Person()
		{
		cout<<"\n set money"; cin>>money;		
		}	
		friend ostream & afun(ostream &out , Person &x);
	};
	ostream & afun(ostream &out , Person&x)
	{
		out<<"\n in a fun "<<x.money;
	}
	
	int main()
	{
		Person obj;
		afun( cout, obj);
		
		return 0;
	}
	
