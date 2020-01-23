	#include<iostream>
	using namespace std;
	
	int vol;
	
	int volume(int x, int y)
	{
	 vol= x*y;	
	return vol;	
	}
	int volume(int x)
	{
	  vol=x*x*x;
	return vol;	
	}
	float volume(float r, float h)
	{
	float pie =3.14f;
	float vol=pie*r*r*h;	
	return vol;
	}
	
	int main()
	{
		int l,b;
		float r,h;
		cout<<"\n Enter length =";
		cin>>l;
		cout<<"\n Enter breadth=";
		cin>>b;
		cout<<"\n Enter height= ";
		cin>>h;
		cout<<"\n Enter radius=";
		cin>>r;
		
		cout<<"\n Volume of Rectangle = "<<volume(l,b);
		cout<<"\n Volume of cube ="<<volume(l);
		cout<<"\n Volume of Cylinder="<<volume(r,h);
		
		return 0;
	}
	
