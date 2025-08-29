// Selection Sort

#include<stdio.h>

main()
{
	int n , i , j;
	printf("Enter the number of elements of the array :");
	scanf("%d",& n);
	int arr[n];
	printf("Enter the elements of the array :");
	for(i = 0 ; i<n ;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The elements of the array before Sorting :");
	for(i = 0 ; i<n ;i++)
	{
		printf("%d ",arr[i]);
	}
	
	for(i = 0; i<n-1 ; i++)			
	{
		int min = i ;
		for(j = i+1 ; j<n ; j++)		
		{
			if(arr[j] < arr[min])				// find the minimum in the array
			{
				min = j;
			}
		}
		
			if(min != i)						// the condition is not needed
			{			
				int temp = arr[min];
				arr[min] = arr[i];				// swap (arr[i], arr[min])
				arr[i] = temp;
			}	
	}
	
	printf("\nThe elements of the array after Sorting :");
	for(i = 0 ; i<n ;i++)
	{
		printf("%d ",arr[i]);
	}
}
