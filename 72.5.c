#include<stdio.h>

main()
{
	int i, j,num ;
	printf("Enter the size of the pattern :");
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{	
		for(j=1; j<=num; j++)
		{
			if(j>=i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

