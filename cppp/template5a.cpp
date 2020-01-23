	#include<iostream>
	using namespace std;
	
	template< class T> T minn( T x, T y)
	{
		return x<y ? x:y;
	};
	
	int main()
	{
		
		min(22,33);
		min(44.5,55.7);
		min(9200,9999);
		
		cout<<"\n int "<<minn(22,33);
		cout<<"\n float  "<<minn(44.5,55.7);
		cout<<"\n int "<<minn(9200,9999);
		
		return 0;
	}
	
	
