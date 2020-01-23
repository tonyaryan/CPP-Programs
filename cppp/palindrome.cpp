#include<iostream> 
using namespace std;

int main()
{
	int n, oi, ri=0 , rem;
	
	cout<<"\n Enter an integer";
	cin>>n;
	
	oi=n;
	
	while(n!=0)
	{
		rem=n%10;
		ri=ri*10 +rem;
		n=n/10;
	}
	
	if(oi == ri)
	{
		cout<<"\n Number is Palindrome";
	}
	
	if(oi != ri)
	{
		cout<<"\n Number is not Palindrome";
	}
	return 0;
}
