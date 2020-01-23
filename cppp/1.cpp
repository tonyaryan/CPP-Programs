#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
int dd,mm,yy;
//01-04-2019
int year, day;
cout<<"Enter The Birth Date IN DD MM YYYY  ";
cin>>dd>>mm>>yy;
year=(2019-yy-1);
day=day+(4-1)*30;
day=day+(12-mm)*30;
day=day+(30-dd);
day=day+1;
cout<<"Number of years lived   "<<year<<"  And "<<day<<"  Days";
getch();
return 0;
}

