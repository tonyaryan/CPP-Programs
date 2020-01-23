#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
private:
int rnum;
char name[20];
int marks[5];
int temp;

public:
void getdata()
{
cout<<"enter name";
cin>>name;
cout<<"enter roll number";
cin>>rnum;

	for(int i=0;i<5;i++)
	{
	cout<<"enter marks";	
	cin>>marks[i];
	}
}

void display()
{ cout<<"name of student:"<<name;
cout<<endl<<"roll number :"<<rnum;
	for(int i=0;i<5;i++)
	{	
	cout<<endl<<"marks of sub :"<<marks[i];
	}
}


void min()
{
		   temp=marks[0];
	for(int i=0;i<5;i++)
	{  if(marks[i]<temp)
           temp=marks[i];
  }
  cout<<"\n lowest marks"<<temp;
  }

void max()
{
		   temp=marks[0];
for(int i=0;i<5;i++)
{  if(marks[i]>temp)
 temp=marks[i];
  }
  cout<<"\n highest marks"<<temp;
  }

void total()
{

for(int i=0;i<5;i++)
{
 temp+=marks[i];
  }
  cout<<"\n Total Marks=  "<<temp;
}

void sort()
{
for(int i=0;i<5;i++)
  for(int j=i+1;j<5;j++)
      if(marks[i]<marks[j])
      { 
temp=marks[i];
marks[i]=marks[j];
marks[j]=temp;
      }
}

};


int main()
{
Student s;
s.getdata();
s.display();
s.min();
s.max();
s.total();
s.sort();
return 0;
}

