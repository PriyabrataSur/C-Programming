#include<stdio.h>
#define MAX 100

int isSorted(int arr[], int n)
{
	int i;
	if(n==0 ||n==1)
	{
		return 1;
	}
	for(i=1; i<n ; i++)
	{
		if(arr[i-1]>arr[i])
		{
			return 0;
		}
	}
	return 1;
}

main()
{
	int i, n, arr[MAX], flag =0;
	printf("Enret the number of elements :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int k =isSorted(arr, n);
	if(k==1)
	{
		printf("The array is 'Sorted'");
	}
	else 
	{	
		printf("The array is 'Not sorted'");
	}
	
}
