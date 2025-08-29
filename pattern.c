#include<stdio.h>
main()
{
	int n =4, i, j;
	for(i=1 ; i<=4 ;i++)
	{
		for(j=1 ; j<=4 ;j++)
		{
			if(j<=n+1-i)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
