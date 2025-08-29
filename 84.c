#include<stdio.h>
#define MAX 100

main()
{
	int arr[MAX], n, pos, i;
	printf("Enter the number of elements of the array :");
	scanf("%d",&n);
	printf("Enter the elements of the array in sorting order :");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int j =0;
	for(i=0 ; i<n ; i++)
	{
		if(arr[i]!=arr[i+1])
		{
				arr[j++]=arr[i];
		}		
	}	
	arr[j++]=arr[n];
	n=j;
	printf("The elements of the array :");
	for(i=0 ; i<n-1 ; i++)
	{
		printf("%d\n",arr[i]);
	}
}
