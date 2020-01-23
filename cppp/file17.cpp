	// 	 TO IDENTIFY RECORDS BY NO.  PRESENT IN FILE
	#include<fstream>
	#include<iostream>     	
	using namespace std;
	
 	class Student
   {    private:
       	  char name[20]; 
       	  int age;
       	  double salary;
         public :       	  
       	     void getData() { cout<<"\n Enter name "; cin>>name; 
				              cout<<"\n Enter age"; cin>>age;
       	                      cout<<"\n Enter salary "; cin>>salary;
				            }
		    void show()
		       {
		         	cout<<name<<"  "<<age<<"  "<<salary;
		       }
			 double getSalary()
		    {
		    	return this->salary;
			}
			int getAge()
			  {
			  return this->age;
			  }
			 
   };
   		int main()
   		{
   			Student sobj;
   			int tot;  int recno;  int cur_pos;
   			
   			ifstream fin("C:\\Users\\Yash Malhan\\Documents\\CPP programs\\file8.txt", ios::in);
   			
		   fin.seekg( 0, ios::end);
   			
   			tot= fin.tellg()/ sizeof(Student);
   			cout<<"\n Total no of rec "<<tot;
           
		   cout<<"\n Let me know rec no.";
		   cin>>recno;
		   
		   if( recno>0 && recno<=tot)
		   {
		   	cur_pos= sizeof(Student) * (recno-1);
		   	fin.seekg( cur_pos , ios:: beg);
		   	fin.read((char *)&sobj , sizeof(sobj));
		   	sobj.show();				
			}	  		
			else
			{
				cout<<"\n Unable to find record no";
			}
   			return 0;
		   }
