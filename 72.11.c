#include<stdio.h>
main()
{
	int n, i, j, row;
	printf("Enter the number of rows : ");
	scanf("%d", &n);
	row=n-1;
	for(i=0 ; i<=row ; i++)
	{
		for(j=1 ; j<=(2*row-1) ; j++)
		{
			if((j>=(row-i)) && (j<=(row+i)))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
