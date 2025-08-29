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
		if(arr[i]%2==0)
		{
			sum = sum + arr[i];
		}
	}
	printf("Sum of even numberrs are:%d",sum);
}
