#include<stdio.h>

main()
{
	int n, i, j, row;
	printf("Enter the number of rows : ");
	scanf("%d", &n);
	row = n - 1 ;
	for(i = 0 ; i <= row ; i++)
	{
		if(i%2 != 0)
		{
			for(j = 1 ; j <= (2*row-1) ; j++)
			{
				if(((j >= (row-i)) && (j <= (row+i))) && (j % 2 == 0))
					printf("*");
				else
					printf(" ");
			}
		}
		else
		{
			for(j = 1 ; j <= (2*row-1) ; j++)
			{
				if(((j >= (row-i)) && (j <= (row+i))) && (j % 2 != 0))
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
}
