#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int num1,num2,temp;
cout<<"\nenter 1st no:";
cin>>num1;
cout<<"enter 2nd no:";
cin>>num2;
cout<<"before swapping:first no:"<<num1<<"\nsecond no:"<<num2;
temp=num1;
num1=num2;
num2=temp;
cout<<"\n after swapping:first no:"<<num1<<"\nsecond no:"<<num2;
getch();
}

