#include<stdio.h>

main()
{
	int i, j,num ;
	printf("Enter the size of the pattern :");
	scanf("%d",&num);
	for(i=0; i<=num; i++)
	{	
		for(j=0; j<=num; j++)
		{
			if(j>=(num+1)-i)
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

