#include<stdio.h>
#define MAX 100

main()
{
	int i, n, arr[MAX],k;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}	
	printf("Enter the position you want to delete:");
	scanf("%d",&k);
	for(i=0 ; i<n ; i++)
	{
		if(i==k)
		{
			arr[i]=arr[i+1];
		}
	}
	printf("The elements of the array before deleting :");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\n",arr[i]);
	}	
	printf("The elements of the array after deleting :");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\n",arr[i]);
	}	
}
