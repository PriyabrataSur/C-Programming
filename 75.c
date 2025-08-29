#include<stdio.h>

int sum()
{
	int i, num, sum = 0 ;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(i=1 ; i<=num ; i++)
	{
		sum = sum +i ;
	}
	return sum;
}

int main()
{
	int s ;
	s = sum() ;
	printf("The sum is : %d",s) ;
}
