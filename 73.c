#include<stdio.h>

void sumnum()
{
	int num1, num2, sum;
	printf("Enter two number to sum :");
	scanf("%d %d",&num1,&num2);
	sum=num1+num2;
	printf("The sum of two numbers is : %d",sum);
}
main()
{
	sumnum();
}
