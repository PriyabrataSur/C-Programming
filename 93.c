#include<stdio.h>
#define MAX 100

main()
{
	int mat[MAX][MAX], i , j , m , n ;
	printf("Enter the number of Rows and Columns : ");
	scanf("%d %d", & m ,& n);
	printf("Enter the elements of the matrix: ");
	for( i=0 ; i<m ; i++ )
	{
		for( j=0 ; j<n ; j++ )
		{
			scanf("%d", &mat[i][j]);
		}
	}
	printf("The elements of the matrix are :");
	for( i=0 ; i<m ; i++ )
	{
		printf("\n");
		for( j=0 ; j<n ; j++ )
		{
			printf("%d ", mat[i][j]);
		}
	}
}
