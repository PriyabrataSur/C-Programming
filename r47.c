#include<stdio.h>

main()
{
	int num1 , num2 , sum = 0;
	printf("Enter two numbers(first one is big):");
	scanf("%d %d", &num1 ,&num2);
	while(num1>=num2)
	{
		sum = sum + num1;
		num1--;
	}
	printf("Sum :%d", sum);
}
