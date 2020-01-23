	#include<iostream>
	#include<fstream>
	using namespace std;
	
	int main()
	{
		ifstream fin;
		fin.open("C:\\Users\\Yash Malhan\\Documents\\CPP programs\\alpha.txt");  // open is the member function of default ifstream class 
		char ch;
		
		while( ! fin.eof() )
		{
			ch= fin.get();
			cout<<" "<<ch;
		}
		fin.close();
		
		return 0;
	}
	
