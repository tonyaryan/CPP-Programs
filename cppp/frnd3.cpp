// use for test & semester exams
	#include<iostream>
	using namespace std;
	
	class Wife; 
	class Husband
	{
		private:
			int salary;
		public:
			Husband( int sal)
			{
				salary=sal;
			}
			
			friend int totali(Wife &w , Husband &h);
			friend int totali(Husband &h , Wife &w);	
	};
	class Wife
	{
	private:
	int salary;
	public:
	Wife( int sal)
	{
		salary=sal;
	}	
			friend int totali(Wife &w , Husband &h);
			friend int totali(Husband &h , Wife &w);
	};
	
	int totali(Wife &w, Husband &h)
	{
		return (w.salary+h.salary);
	}
	int totali(Husband &h, Wife &w)
	{
		return (h.salary+w.salary);
	}
	int main()
	{
		Wife wobj(1222);
		Husband hobj(2222);	
		
		cout<<"Total income"<<totali(wobj,hobj);
		cout<<"Total income"<<totali(hobj,wobj);
		
		return 0;
	}
