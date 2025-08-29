#include<stdio.h>

void palindrome(int a);

main()
{
	int num ;
	printf("Enter the number : ");
	scanf("%d",&num);
	palindrome(num);
}

void palindrome(int a)
{
	int i , rev =0;
	int n = a ;
	while(a!=0)
	{
		i= a % 10;
		a = a / 10;
		rev = rev *10 + i;
	}
	if(rev == n)
	{
		printf("Palindrome Number") ;
	}
	else
	{
		printf("Not a Palindrome Number") ;
	}
}
