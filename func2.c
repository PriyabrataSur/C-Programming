#include<stdio.h>

void sum(int a,int b);

void sum(int a,int b)
{
	int c= a+b;
	printf("Sum : %d",c);
}

main()
{
	sum(8,9);
}
