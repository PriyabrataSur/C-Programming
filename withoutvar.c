#include<stdio.h>
main()
{
	int num1, num2;
	printf("Enter two numbers : ");
	scanf("%d %d",&num1,& num2);
	printf("Before swaping :%d %d", num1, num2);
	num1=num1 + num2;
	num2=num1 - num2;
	num1= num1- num2;
	printf("\nAfter swaping :%d %d", num1, num2);
}
