#include<stdio.h>
int main( )

{
	int i,j,c;
	printf("\n");
	for(i=2;i<=5;i++)
	{
		c=i;
		for(j=1;j<i;j++)
		{
			printf("%d ",c);
			c++;
		}
		printf("\n");
	}	
}
