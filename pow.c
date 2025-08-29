#include<stdio.h>

void power(int a, int b);

void power(int a, int b)
{
	int i, p=1;
	for(i=1; i<=b; i++)
	{
		p = a*p;
	}
	printf("The answer is :%d", p);
}

main()
{
	int num , pow ;
	printf("Enter the number :");
	scanf("%d",&num);
	printf("Enter the power :");
	scanf("%d",&pow);
	power(num, pow);
}
