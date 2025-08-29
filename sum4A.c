#include<stdio.h>
//#include<math.h>

int main()
{
	int i, term, n , sum = 1 ;
	printf("Enter the number & the term:");
	scanf("%d %d",&n ,&term);
	for(i = 1; i<=term ; i++)
	{
		sum = sum + pow(n,i);
	}
	printf("The Sum value is :%d",sum);
}
