	#include<iostream>
	#include<fstream>
	using namespace std;
	
	int main()
	{
		ifstream fin;
		fin.open("C:\\Users\\Yash Malhan\\Documents\\CPP programs\\alpha.txt");
		char ch;
		
		cout<<"\n current position"<<fin.tellg();
		
		ch= fin.get();   
		cout<<" "<<ch;
		
		cout<<"\n now position "<<fin.tellg();
  				
        //abcdefghijk		
		return 0;
	}
