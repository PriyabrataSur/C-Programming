#include<stdio.h>
#define MAX 100

main()
{
	int arr[MAX], n, i , j;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++)
	{
		if(arr[i]!= arr[i+1])
		{
			arr[j++]=arr[i];
		}
	} 
	printf("The elements of the new array:");
	for(j=0 ; j<n ; j++)
	{
		printf("%d\n",&arr[j]);
	}
}
