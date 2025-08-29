#include<stdio.h>
 
main()
{
	int arr[5] , sum =0 ;
	int i;
	printf("Enter the elements of the array :");
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<5; i++)
	{
		sum = sum + arr[i];
	}
	printf("Sum :%d",sum);
}
