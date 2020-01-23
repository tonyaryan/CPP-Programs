	#include<iostream>
	#include<string.h>
	using namespace std;
	
	class Name
	{
		private:
			char name1[20];
				
		public:
			Name()
			{
				strcpy(name1," ");
			}
			
			Name ( char *str)
			{
				strcpy(name1,str);
			}
			
			void getdata()
			{
				cout<<"\n Enter name";
				cin>>name1;
			}
			
			void showdata()
			{
			cout<<" "<<name1;	
			}
			
			Name operator +( Name &s)
			{
				Name temp;
				strcpy(temp.name1,this->name1);
				strcat(temp.name1,s.name1);
				return temp;
			}
				
	};
	
	int main()
	{
		Name n1,n2,n3;
				
		n1.getdata();
		n2.getdata();
		
		cout<<"\n First name =";
		n1.showdata();
		
		cout<<"\n Second name =";
		n2.showdata();
		
		n3=n1+n2;
		
		cout<<"\n After additon of both strings =";
		n3.showdata();
		
		return 0;
	}
