//Strong Number  145 = 1! + 4! + 5!

#include<stdio.h>

int fact(int n)
{
	int factR;
	if(n == 1)
	{
		return 1;
	}else{
		factR = fact(n-1) * n ;
	}
	return factR;
}

int main()
{
	int num , n , dig , sum = 0 ;
	printf("Enter the number :");
	scanf("%d", &num);
	n = num;
	while(num != 0 )
	{
		dig = num%10 ; 
		sum = sum + fact(dig);
		num = num /10 ;
	}
	
	if(sum == n)
	{
		printf("Strong Number");
	}else{
		printf("Not a Strong Number");
	}
}
