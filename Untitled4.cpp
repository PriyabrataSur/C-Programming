#include<stdio.h>

main()
{
	int i, j,num ;
	printf("Enter the size of the pattern :");
	scanf("%d",&num);
	for(j=1; j<=num; j++)
	{
		printf("\n");
		
		for(i=1; i<=j; i++)
		{
			printf("%d ",j);
		}
	}
}
