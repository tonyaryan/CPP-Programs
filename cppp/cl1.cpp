	    // Implementation of oops using cpp
    // basic skelton in notebook rules,etc.
    #include<iostream>
    using namespace std;
	  
    class Student
    {
    public :
    short int id; 
	char name[20];           // variable /array/ pointer / ref var
	char grade[20];	
   
	void Input()        
	  {                               // function   - to determine object's behaviour     
		cout<<"\n Enter ur id ";
		cin>>id;
		cout<<"\n Enter name";
		cin>>name;
		cout<<"\n Enter ur Grade ";
		cin>>grade; 	 
	  }    		
	void Output()
	 {	
	   cout<<"\n "<<id<<" "<<name<<" "<<grade;
	 }  
	};
	
        int main()
         {    
    		Student x;
                    		
    	 		x.Input();
    	 		x.Output();
    	 			 				   	 			
    	return 0;
	}
