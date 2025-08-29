#include<stdio.h>

int armstrong(int a) ; 

int armstrong(int a)
{
	int i , sum = 0;
	while(a>0)
	{
		i=a%10;
		a=a/10;
		sum=sum +(i*i*i);	
	}
	return sum;
	
}

main()
{
	int num;
	printf("Enter the number you want to check Armstrong or not :") ;
	scanf("%d", &num) ;
	int n = armstrong(num) ;
	if(num == n)
	{
		printf("Armstrong Number") ;
	}
	else
	{
		printf("Not a Armstrong Number") ;
	}
}
