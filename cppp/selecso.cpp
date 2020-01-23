	#include<stdio.h>
	
	int main()
	{
		int arr[20]; 
		int x,i,j,pos,temp;
		
		printf("\n Enter number of elements in array");
		scanf("%d",&x);
		
		for(i=1; i<=x ;i++)
		{
			printf("\n Enter %d element ",i);
			scanf("%d",&arr[i]);
		}
		
		for(i=1; i<=x ; i++)
		{
		pos=i;
		
			for(j=i+1; j<=x ; j++)
			{
				if(arr[pos]> arr[j])		
				{
				pos=j;
				}
			}
		if( arr[pos]!= i)
		{
			temp =arr[i];
			arr[i] = arr[pos];
			arr[pos] = temp;
			}	
			
			
		}
		printf("\n Array elements in ascending order ");
		
		for(i=1; i<=x ;i++)
		{
			printf("\n %d", arr[i]);
		}
		
		return 0;
	}
