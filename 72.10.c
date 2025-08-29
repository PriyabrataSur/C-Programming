#include<stdio.h>

main()
{
	int i, j,num ;
	printf("Enter the size of the pattern :");
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{	
		for(j=1; j<=num-i; j++)
		{
			printf("%d ",j);
		}
		printf("%d\n",j);
	}
}
