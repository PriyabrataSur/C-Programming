#include<stdio.h>

swap(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("\nAfter swapping %d and %d",num1 ,num2);
}

main()
{
	int num1, num2;
	printf("Enter two numbers to swap :");
	scanf("%d %d",&num1 ,&num2);
	printf("Before swapping %d and %d",num1 ,num2);
	swap(num1,num2);
	
}
