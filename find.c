#include<stdio.h>
#define MAX 100

main()
{
	int i, n,val, arr[MAX], flag =0;
	printf("Enret the number of elements :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the value you want to find :");
	scanf("%d",&val);
	for(i=0;i<n;i++)
	{
		if(val==arr[i])
		{
			printf("Find at index :%d",i);
			flag =1;
			break;
		}		
	}
	if(flag==0)
	{
		printf("Not found");
	}
}
