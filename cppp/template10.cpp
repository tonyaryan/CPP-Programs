// use for test & semester exams
// use of friend function with template class // error in dev - running in turbo c3

	#include<iostream>
	using namespace std;
	
	template <class T> class Wife; 
	template <class T> class Husband
	{
		private:
			T salary;
		public:
			Husband( int sal)
			{
				salary=sal;
			}
			
			friend T totali(const Husband <T> &h , const Wife <T> &w);	
	};
	template <class T> class Wife
	{
	private:
	T salary;
	public:
	Wife( T sal)
	{
		salary=sal;
	}	
			friend T totali(Husband const <T> &h , const Wife <T> &w);
	};
	
	template <class T> T totali(const Husband <T> &h, const Wife <T> &w)
	{
		return (h.salary+w.salary);
	}
	int main()
	{
		Wife <long>  wobj(1222);
		Husband <long> hobj(2222);	
		
		cout<<"Total income"<<totali(hobj,wobj);
		
		return 0;
	}		
