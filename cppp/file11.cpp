	#include<iostream>
	#include<fstream>
	using namespace std;
	
	int main()
	{
	ifstream fin("C:\\Users\\Yash Malhan\\Documents\\CPP programs\\file8.txt");
	
		if( fin.good()==0)   // this function act as 'bool' good used to check whether buffer get created or not (0=false ; 1= True ) 
		{                    // when we make changes or delete file it checks first , whether to read or not buffer
			cout<<"\n Unable to read";
			return 0;
		}
		
		char ch;
		while( ! fin.eof() )
		{
			ch= fin.get();
			cout<<ch;
		}
		fin.close();
				
		return 0;
	}
