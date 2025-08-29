#include<stdio.h>

void fn(int n)
{
	if(n==0)
		return ;
	printf("%d\n",n);
	fn(n-1);
}
main()
{
	int n ;
	printf("Enter a number :");
	scanf("%d",&n);
	fn(n);
}
