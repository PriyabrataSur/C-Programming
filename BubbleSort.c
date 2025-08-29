//	Bubble Sort

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
	
	for(i = 0; i< n-1 ; i++)			// number of pass
	{
		int flag = 0;					
		for(j = 0 ; j<n-1-i ; j++)		// for comparisons in each pass  (n-1-i) & (n-i) both runs how ?  6/8/25
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
		if(flag == 0)					// for a no swapping pass means the array is already sorted
		{
			break ;
			
		}	
	}
	
	printf("\nThe elements of the array after Sorting :");
	for(i = 0 ; i<n ;i++)
	{
		printf("%d ",arr[i]);
	}
}
