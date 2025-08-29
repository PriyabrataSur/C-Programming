#include<stdio.h>
#define MAX 100

main()
{
	int i , j, num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	for(i=1 ; i<=3 ; i++)
	{
		for(j=1 ; j<=num ; j++)
		{
			if(i==1)
			{
				printf(" %d ",2*num+j);
			}
			if(i==2)
			{
				if(j==1)
				{
					printf(" %d ",2*num);
				}
				else{
					printf(" %d ",j-1);
				}
			}
			if(i==3)
			{
				printf(" %d ",2*num-j);
			}			
		}
		printf("\n");
	}
}

