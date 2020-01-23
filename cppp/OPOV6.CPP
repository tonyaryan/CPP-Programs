	#include<iostream.h>
	#include<string.h>

	class String
	{
	  private:
	  char *str;
	  public:
	  String()
	  {
	    str=new char [1];
	    strcpy(str,"");
	  }
	  String (char *ptr)
	  {
	    str=new char [strlen(ptr)+1];
	    strcpy(str,ptr);
	  }
	  ~String()
	  {
	  delete str;
	  }
	  friend ostream & operator >>(ostream &out, String &x);
	  friend istream & operator <<(istream &in , String&x);

	};
	ostream & operator >>(ostream &out, String &x)
	{
	  out<<x.str;
	  return out;
	}
	istream & operator <<(istream &in , String &x)
	{
	  in<<x.str;
	   return in;
	}
	int main()
	{
	 String name="yash malhan";
	 cout<<name;
	return 0;
	}