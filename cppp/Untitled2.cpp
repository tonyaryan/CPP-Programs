#include<iostream>
#include<conio.h>
using namespace std;
class Date
{
public:
int date,month,year;
int i,a,p,dd;
void addDays();
void readDate();
void dispDate();
};
void Date::readDate()
{
cout<<"\nEnter the date in format DD:MM:YYYY"<<endl;
cin>>date>>month>>year;
}
void Date::dispDate()
{
cout<<"\nThe date entered by user is:\n"<<date<<":"<<month<<":"<<year<<endl;
}
void Date::addDays()
{
cout<<"\nEnter number of days to add:";
cin>>dd;
int m[]={0,31,28,31,30,31,30,31,31,30,31,30,31},k=0 ;
for(i=0;i<month;i++)
k = k+m[i];
k = k+date+dd;
cout<<"\nNew date:";
if(k<=365)
{
for(i=0;i<13;i++)
{
	p= k-m[i];
	if(p<=m[i+1])
	{a= i+1;break;}
	else
	k=p;
}
cout<<p<<"/"<<a<<"/"<<year;
}
else
{
k= k-365;
     for(i=0;i<13;i++)
{
     p= k-m[i];
     if(p<=m[i+1])
     {a = i+1;break;}
     else
     k=p;
}
cout<<p<<"/"<<a<<"/"<<year+1;
}
}
int main()
{
Date obj;
obj.readDate();
obj.dispDate();
obj.addDays();
getch();
return 0;
}

