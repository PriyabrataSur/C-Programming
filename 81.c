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
	int small = arr[0];
	
	for(i=0; i<7; i++)
	{
		if(small >= arr[i])
			small = arr[i];
	}
	printf("Largest element of the array: %d",small);
}
