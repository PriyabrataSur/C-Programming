#include<stdio.h>

int fact(int n)
{
	int fct =1;
	if(n==0)
		return fct ;
	fct = fct *n;
	fact(n-1);
}
main()
{
	int n ,k ;
	printf("Enter a number :");
	scanf("%d",&n);
	k = fact(n);
	printf("Factorial is :%d", k );
}
