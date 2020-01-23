    // Implementation of oops using cpp
    // basic skelton in notebook rules,etc.
    #include<iostream>
    using namespace std;
    
	  
    class Book
    {
    public:
    short int id; 
	char name[20];           // variable /array/ pointer / ref var
	char author[20];	
    
	void addRecord()        
	  {                               // function   - to determine object's behaviour     
		cout<<"\n Enter ur id ";
		cin>>id;
		cout<<"\n Enter name";
		cin>>name;
		cout<<"\n Enter author ";
		cin>>author; 	 
	  }    		
	void showRecord()
	 {	
	   cout<<"\n "<<id<<" "<<name<<" "<<author;
	 }  
	};
	
        int main()
         {    
    		Book x;
    		cout<<"\n "<<sizeof(x);	
    	 		x.addRecord();
    	 		x.showRecord();
    	 		
    	 		Book y=x;
    	 		y.addRecord();
    	 		y.showRecord();
    	 		
    	 		
    	return 0;
	}
