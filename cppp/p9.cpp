	
	 #include<iostream>
	 using namespace std;
	 
	 int main()
	 {
	 	int x=90;
	 	int &y= x;
	 	 	 	 
	 	cout<<"\n x="<<x;  
	 	cout<<"\n y="<<y;  
	 	    	y=100;
	 	cout<<"\n x="<<x;
	 	cout<<"\n y="<<y;
	 	cout<<"\n &x="<<&x;
	 	cout<<"\n &y="<<&y;
	 
	  return 0;
	 }
