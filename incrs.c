#include<stdio.h>

void fn(int n)
{
	if(n==0)
		return ;
	fn(n-1);
	printf("%d\n",n);
}
main()
{
	int n ;
	printf("Enter a number :");
	scanf("%d",&n);
	fn(n);
}
