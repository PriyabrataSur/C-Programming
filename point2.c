#include<stdio.h>

main()
{
	int a[3][3] , i, j ;
	int *p=a;
	printf("Enter the array :");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
	printf("The array :\n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("%d\t",*(*(a+i)+j));
		}
		printf("\n");
	}
}
	
