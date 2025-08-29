#include<stdio.h>
main()
{
	int num1, num2, temp;
	printf("Enter two numbers : ");
	scanf("%d %d",&num1,& num2);
	printf("Before swaping :%d %d", num1, num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("\nAfter swaping :%d %d", num1, num2);
}
