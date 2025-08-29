#include<stdio.h>
#define MAX 100

main()
{
	int arr[MAX], n, val, pos, i;
	printf("Enter the number of elements of the array :");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}	
	printf("Enter the position you want to insert :");
	scanf("%d",&pos);
	printf("Enter the value you want to insert :");
	scanf("%d",&val);
	for(i=n-1; i>= pos ; i--)
	{
		arr[i+1]= arr[i];
	}
	for(i=0 ; i<n ; i++)
	{
		if(i==pos)
		{
			arr[i]=val;
		}
	}
	printf("The elements of the array after inserting :");
	for(i=0 ; i<n+1 ; i++)
	{
		printf("%d\n",arr[i]);
	}		
}
