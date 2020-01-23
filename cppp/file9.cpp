	#include<fstream>
	#include<iostream>	
	using namespace std;
	
 	class Student
   {    private:
       	  char name[20]; 
       	  int age ;
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
			// we've declared each variable in diff. function in order to perform additional operation (e.g addtion in salary specific)
			// see in main of program 		
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
       ifstream fin("C:\\Users\\Yash Malhan\\Documents\\CPP programs\\file8.txt", ios:: in);
   	        fin.read((char *)&sobj, sizeof(sobj));
	        while( !fin.eof())
	         {
     sobj.show();  // we've declared each variable in diff. function in order to perform additional operation (e.g addtion in salary specific)
	     //    	  cout<<sobj.getAge()<<"  "<<sobj.getSalary()<<" salary after inc "<<sobj.getSalary()+1000;
	        cout<<"\n";
            fin.read((char *)&sobj, sizeof(sobj));
	      
			 }
			 
	return 0;		 
	}	
