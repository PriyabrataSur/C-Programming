#include<stdio.h>
#define MAX 100

main()
{
	int i, n, v, arr[MAX],k;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}	
	printf("Enter the position you want to insert :");
	scanf("%d",&k);
	printf("Enter the value you want to insert :");
	scanf("%d",&v);
	printf("The elements of the array before inserting :");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\n",arr[i]);
	}	
	for(i=0 ; i<n ; i++)
	{
		if(i>=k)
		{
			arr[i+1]=arr[i];
			arr[k]=v;
		}
	}
	printf("The elements of the array after inserting :");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\n",arr[i]);
	}	
}
