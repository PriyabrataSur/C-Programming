#include<stdio.h>
main()
{
	int num1;
	printf("Enter a number : ");
	scanf("%d",&num1);
	if(num1>0)
		printf("It ia a positive number ");
	else if(num1==0)
		printf("It is zero");
	else
		printf("It ia a negative number");
}
