#include<stdio.h>
main()
{
	int n =4, i, j;
	for(i=1 ; i<=2*n-1 ;i++)
	{
		for(j=1 ; j<=n ;j++)
		{
			if(i<=n)
			{
				if(j<=i)
				{
					printf(" * ");
				}
				else
				{
					printf(" ");
				}
			}
			if(i>n)
			{
				if(j<=2*n-i)
				{
					printf(" * ");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
