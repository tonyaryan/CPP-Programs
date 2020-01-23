		// TOTAL NO OF LETTERS IN UR RECORD FILE( TEXT)
	#include<iostream>
	#include<fstream>
	using namespace std;
	
	int main()
	{
		ifstream fin;
		cout<<"\n Enter name and loc of file";
		char name[20];
		cin>>name;
		   // use only single slash when putting address in output screen & use double slash when putting in " "
		   fin.open(name , ios:: in);
		   
		   fin.seekg(0,  ios :: end);  
		   cout<<"\n no of letter in ur file"<<fin.tellg();

		return 0;
		
	}
