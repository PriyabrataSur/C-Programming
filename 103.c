#include<stdio.h>
#define MAX 100

main()
{
	int mat[MAX][MAX], i , j , m , n , k , flag = 0 ;
	printf("Enter the number of rows and columns :");
	scanf("%d %d", & m ,& n);
	printf("Enter the elements of the matrix: ");
	
	for( i=0 ; i<m ; i++ )
	{
		for( j=0 ; j<n ; j++ )
		{
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("The elements of the matrix are :\n");
	for( i=0 ; i<m ; i++ )
	{
		for( j=0 ; j<n ; j++ )
		{
			printf("[%d][%d]--> %d \n", i, j, mat[i][j]);
		}
	}
	
	printf("\nEnter the element which you want to find :");
	scanf("%d",&k);
	
	for(i=0 ; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(mat[i][j]==k)
			{
				printf("\nFind at index :[%d][%d]", i, j);
				flag =1;
			}
		}
	}
	
	if(flag==0)
	{
		printf("\nNot found");
	}
}
