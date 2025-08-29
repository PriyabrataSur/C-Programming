#include<stdio.h>

void prime(int a) ; 

void prime(int a)
{
	int flag = 0 , i ;
	for(i = 2; i <= a/2; i++)
	{
		if(a % i == 0)
		{
			flag = 1 ;
		}	
	}
	
	if(flag == 0)
	{
		printf("Prime Number") ;
	}
	else
	{
		printf("Not a Prime Number") ;
	}
}

main()
{
	int num;
	printf("Enter the number you want to check Prime or not :") ;
	scanf("%d", &num) ;
	prime(num) ;
}
