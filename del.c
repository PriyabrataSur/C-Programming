#include<stdio.h>
#define MAX 100

main()
{
	int arr[MAX], n, pos , i;
	printf("Enter the number of elements of the array :");
	scanf("%d",&n);
	printf("Enter the elements of the array :");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the deleting index of the array :");
	scanf("%d",&pos);
	for(i=pos ; i<n ; i++)
	{
		arr[i]= arr[i+1];	
	}	
	printf("The elements of the array after deleting :");
	for(i=0 ; i<n-1 ; i++)
	{
		printf("%d\n",arr[i]);
	}
}
