#include<stdio.h>

main()
{
	int i, j,num ,a = 1;
	printf("Enter the size of the pattern :");
	scanf("%d",&num);
	for(i=0; i<=num; i++)
	{	
		for(j=0; j<=num; j++)
		{
			if(j>=(num+1)-i)
			{
				printf("%d ",a);
				a++;
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}

