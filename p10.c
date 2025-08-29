#include<stdio.h>
main()
{
	int n =5, i, j;
	for(i=1 ; i<=n ;i++)
	{
		for(j=1 ; j<=n ;j++)
		{
			if(j<=n+1-i)
			{
				printf(" %d ",j);
			}
		}
		printf("\n");
	}
}
