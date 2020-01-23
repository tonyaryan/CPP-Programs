             	#include<iostream>
				using namespace std;
				int main()
				{
					float rate=2.3;
					int age = 23;
					char grade ='a';
					
					cout<<rate;      // printf("%f",rate);
			
					cout<<age<<"\n"<<grade<<"\n";  //printf("%d" \n,age);...format specifier isnt required in c++
					
					cout<<"value of age"<<age;
				                                       	// in C++ we can declare variable anywhere in prog
					
					int marks[5]={2,3,4,5,6};
					
					 for(int i=0; i<5;i++)
					   {
					   cout<<"\n" <<marks[i];   // printf(" %d", marks[i]);
					   }
					   return 0;
			
				}
