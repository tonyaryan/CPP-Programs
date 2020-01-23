	#include<iostream>
	#include<string.h>
	using namespace std;
	class String
	{
	 private:
	 char str[200];
	 public:
	 String()
	 {
	 	strcpy(str,"");
	 }
	  String operator +(String &x)
	 {
	 	String temp;
	 	strcpy (temp.str, this->str);
	 	strcat (temp.str, x.str);
	 	return temp;
	 }
	 void disp(str &s)
	 {
	 	cout<<"\n after addition"<<res;
	 }
	};
	
	 int main()
	{
		Str fname="Yash";
		Str lname="Malhan";
		Str res;
		res=fname+lname;
		
		
	
