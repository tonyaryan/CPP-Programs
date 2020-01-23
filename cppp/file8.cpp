 // to write in their orignal datype .. also used to store data in encrypted form  
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
 	  	sobj.getData();
 		ofstream fout("C:\\Users\\Yash Malhan\\Documents\\CPP programs\\file8.txt",ios ::app);
	    
		fout.write((char *)&sobj, sizeof(sobj));			
               
		// write() is the member function of ofstream class used to write object data directly to file without loosing is datatype info
		// it will store data in encrypted form*
		// we cant view data in normal text editor
		// req. 2 arguments .. class object , its size in terms of no. of bytes	
	
		fout.close();
		return 0;
	}
