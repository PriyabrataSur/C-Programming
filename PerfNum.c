// Perfect Number -> 6 = 1+2+3 ; 28 = 1+2+4+7+14

#include<stdio.h>

int main()
{
	int n , i , sum =0;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i = 1 ; i <= n/2 ; i++)
	{
		if(n % i == 0)
			sum = sum + i ;
	}
	if(sum == n)
	{
		printf("Perfect Number");
	}else
	{
		printf("Not a Perfect Number");
	}
}
