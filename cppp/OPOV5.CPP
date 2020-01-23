	// String class operator overloading ..  IMPORTANT

	#include<iostream.h>
	#include<string.h>
	class String
	{
	 private:
	 char str[200];
	 public:
	 String()
	 {
	 	strcpy(str,"");
	 }
	 String(char *ptr)
	 {
		strcpy(str,ptr); 	
	 }	
	 String operator +(String &x)
	 {
	 	String temp;
	 	strcpy (temp.str, this->str);
	 	strcat (temp.str, x.str);
	 	return temp;
	 }
	 void reverse()
	 {
	 	strrev(this->str);
	 }
	 unsigned length()
	 {
	 	return strlen(this->str);
	 }
	 friend & operator <<(ostream &out , String &s);
	 friend & operator >>(istream &in , String &s) ; 
	 
	};
	
	ostream & operator <<(ostream &out, String &s )
	{
		out<<s.str;
		return out;
	}
	istream & operator >>(istream &in , String &s)
	{
		in>>s.str;
		return in;
	}
	
	int main()
	{
		String name="Yash Malhan";
		cout<<name;
		
		String name;
		  cout<<"\n Enter ur name";
		  cin>>name;
		  cout<<"name= "<<name;
		  
		  cout<<"length= "<<name.length;
		  
		  name.reverse();
		  cout<<"\n name ="<<name;
		  name.reverse();
		  cout<<"\n again reverse name"<<name;
		  
		  name="TAJ MAHAL";
		  cout<<"\n name"<<name;
		  
		  String fname="yash";
		  String sname="malhan";
		  
		  String res;
		  res= fname + sname;
		  cout<<"\n fname"<<fname;
		  cout<<"\n sname"<<sname;
		  cout<<"\n res"<<res;
		
		return 0;
	}
