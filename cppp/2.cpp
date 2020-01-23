#include<iostream>
using namespace std;
#include<string.h>
class publication
{
 char title[200];
 float price;
 public:
publication()
 {
 title[200] = 0;
 price = 0;
 }
 void get_data()
 {
 cout<<"\n \t enter title and price of a book: ";
 cin>> title >> price;
 }
 void display()
 {
 cout<<"\n \t title: "<< title <<"\n \t price:"<< price;
 }
};
class book : public publication
{
 int page_count;
 public:
 book () : publication()
 {
 page_count = 0;
 }
 void get_data()
 {
 publication :: get_data();
 cout<<"\n \t enter page count of book: ";
 cin>> page_count;
 }
 
 void display()
 {
 publication :: display();
 cout<<"\n \t page count: "<< page_count;
 }
};
class tape: public publication
{
 float time;
 public:
 tape(): publication()
 {
 time = 0;
 }
 void display()
 {
 publication :: display();
 cout<<"\n \t time: "<< time ;
 }
 void get_data()
 {
 publication :: get_data();
 cout<<"\n \t enter reading time of book in minutes: ";
 cin>> time;
 }
};
int main()
{
 cout<<"\n class publication ";
 publication a;
 a.get_data();
 cout<<"\n \t details: ";
 a.display();
 cout<<"\n class book ";
 book b;
 b.get_data();
 cout<<"\n \t details: ";
 b.display();
 cout<<"\n class tape ";
 tape c;
 c.get_data();
 cout<<"\n \t details: ";
 c.display();
return 0;
}

