#include<iostream>
using namespace std;
#include<string.h>
class sales
{
 float sale[10];
 public:
 sales()
 {
 for(int i=0; i<10; i++)
 {
 sale[i] = 0.0;
 }
 }
 void get_data()
 {
 cout<<"\n \t enter sales of last 3 months: ";
 for(int i = 0; i<3; i++)
 {
 cin>> sale[i];
 }
 }
 void display()
 {
 cout<<"\n \t sales of last 3 months: ";
 for(int i=0; i<3; i++)
 {
 cout<<"\n \t\t "<< i+1 <<": "<< sale[i];
 }
 }
};
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
class book : public publication , public sales
{
 int page_count;
 public:
 book () : publication(), sales()
 {
 page_count = 0;
 }
 void get_data()
 {
 publication :: get_data();
 sales :: get_data();
 cout<<"\n \t enter page count of book: ";
 cin>> page_count;
 }
 void display()
 {
 publication :: display();
 sales :: display();
 cout<<"\n \t page count: "<< page_count;
 }
};
class tape: public publication , public sales
{
 float time;
 public:
 tape(): publication() , sales()
 {
 time = 0;
 }
 void display()
 {
 publication :: display();
 sales :: display();
 cout<<"\n \t time: "<< time ;
 }
 void get_data()
 {
 publication :: get_data();
 sales :: get_data();
 cout<<"\n \t enter reading time of book in minutes: ";
 cin>> time;
 }};
int main()
{
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

