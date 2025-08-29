#include<stdio.h>
main()
{
	int num1 , num2;
	printf("Enter two numbers : ");
	scanf("%d %d",&num1 ,&num2);
	if(num1>num2)
		printf("%d is bigger",num1);
	else
		printf("%d is bigger",num2);
}
