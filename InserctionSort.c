//	Inserction Sort

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
	for(i = 0 ; i<n ; i++)
	{
		printf("%d ",arr[i]);
	}
		
	for(i = 1; i<n ; i++)			
	{
		int temp = arr[i];
		j = i-1;					
		while(j >= 0 && arr[j] > temp)				// j is the left array and i is the right array				
		{
			arr[j+1] = arr[j];
			j--;
		}	
		arr[j+1] = temp;
	}
	
	printf("\nThe elements of the array after Sorting :");
	for(i = 0 ; i<n ;i++)
	{
		printf("%d ",arr[i]);
	}
}
