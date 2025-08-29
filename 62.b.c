#include<stdio.h>

int palindrome(int a);

main()
{
	int num ;
	printf("Enter the number : ");
	scanf("%d",&num);
	int n = palindrome(num);
	if(num == n)
	{
		printf("Palindrome Number") ;
	}
	else
	{
		printf("Not a Palindrome Number") ;
	}
}

int palindrome(int a)
{
	int i , rev =0;
	int n = a ;
	while(a!=0)
	{
		i= a % 10;
		a = a / 10;
		rev = rev *10 + i;
	}
	return rev;
}
	
