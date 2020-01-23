// TELL POSTION OF RECORD IN FILE & CHANGE THE POSITION AS WELL
	#include<iostream>
	#include<fstream>
	using namespace std;
	
	int main()
	{				// abcdefghijklmnopqrstuvxyz
		ifstream fin;
		fin.open("C:\\Users\\Yash Malhan\\Documents\\CPP programs\\alpha.txt");
		char ch;
		cout<<"\n current pos"<<fin.tellg();
		ch=fin.get();         cout<<" "<<ch;
		                                                         //these will be seekp & tellp with ofstream
		fin.seekg(1, ios::beg);
		cout<<"\n 1st pos"<<fin.tellg(); 
		ch=fin.get();   cout<<" "<<ch;

		fin.seekg(4,ios ::beg); // it is skipping from 0 to 5th position  ; 4 bytes 
		cout<<"\n positon after skipping 4 bytes"<<fin.tellg();
		ch=fin.get();     cout<<" "<<ch;
		
		fin.seekg(-1, ios::cur);        
		cout<<"\n current after pos"<<fin.tellg();
		ch=fin.get();     cout<<" "<<ch;
         
		fin.seekg(-1, ios:: end);
		cout<<"\n end pos"<<fin.tellg();
		ch=fin.get();     cout<<" "<<ch;

		return 0;
	}
