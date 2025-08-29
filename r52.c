#include<stdio.h>

main()
{
	int num1 , num2 , i, sum = 0;
	printf("Enter two numbers(second one is big):");
	scanf("%d %d", &num1 ,&num2);
	for(i=num1 ; i<=num2 ; i++)
	{
		sum = sum + i;
	}
	printf("Sum :%d", sum);
}
