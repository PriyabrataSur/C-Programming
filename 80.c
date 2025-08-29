#include<stdio.h>
 
main()
{
	int arr[7] , sum =0 ;
	int i;
	printf("Enter the elements of the array :");
	for(i=0; i<7; i++)
	{
		scanf("%d",&arr[i]);
	}
	int large = arr[0];
	
	for(i=1; i<7; i++)
	{
		if(large <= arr[i])
			large = arr[i];
	}
	printf("Largest element of the array: %d",large);
}
