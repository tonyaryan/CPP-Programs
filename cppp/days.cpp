	#include<iostream>
	using namespace std;
	
	int main()
	{
		int d1,m1,y1;
		int d2,m2,y2;
		int day,weeks;
		cout<<"Enter Date of Birth in DD/MM/YYYY";
		cin>>d1>>m1>>y1;
		
		cout<<"Enter Today's date in DD/MM/YYYY";
		cin>>d2>>m2>>y2;
		
		day=(y2-y1-1)*365;
		day=day+(m2-1)*30;
		day=day+(12-m1)*30;
		day=day+(30-d1);
		day=day+d2;
		day=day+12;
		
		weeks= day/7;
		
		cout<<"No. of days= "<<day;
		cout<<"\n No. of weeks=   "<<weeks;
		return 0;
	}
	
