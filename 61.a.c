#include<stdio.h>

void armstrong(int a) ; 

void armstrong(int a)
{
	int n, i , sum = 0;
	n = a;
	while(a!=0)
	{
		i=a%10;
		a=a/10;
		sum=sum +(i*i*i);	
	}
	
	if(sum == n)
	{
		printf("Armstrong Number") ;
	}
	else
	{
		printf("Not a Armstrong Number") ;
	}
}

main()
{
	int num;
	printf("Enter the number you want to check Armstrong or not :") ;
	scanf("%d", &num) ;
	armstrong(num) ;
}
