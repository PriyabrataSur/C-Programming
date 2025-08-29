#include<stdio.h>

main()
{
	int i, j,num ;
	printf("Enter the size of the square :");
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{
		printf("\n");
		
		for(j=1; j<=num; j++)
		{
			printf("* ");
		}
	}
}
