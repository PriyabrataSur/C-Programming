#include<stdio.h>

void sumnum()
{
	int num1, num2, sum;
	printf("Enter two number to sum :");
	scanf("%d",&num1,&num2);
	sum=num1+num2;
	printf("%d",sum);
}
main()
{
	int sum;
	sum=sumnum();
	
}
