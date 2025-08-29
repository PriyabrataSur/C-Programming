//Binary Search

#include<stdio.h>
#define MAX 100

main()
{
	int i, n, arr[MAX], val, flag =0 ;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the value you want to find :");
	scanf("%d",&val);
	
	int mid, low = 0;
	int high = n-1;
	while(low<=high)
	{
		mid = (high + low) / 2;
		if(val==arr[mid])
		{
			flag = 1;
			break ;
		}
		
		if(val>arr[mid])
		{
			low = mid + 1;
		}
		else 
		{
			high = mid - 1;
		}
	}
	
	if(flag==1)
	{
		printf("The index of the element is :%d",mid+1);
	}
	else 
	{	
		printf("Not found");
	}
	
}
