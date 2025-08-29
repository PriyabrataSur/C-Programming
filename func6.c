#include<stdio.h>

void swap(int a, int b);

void swap(int a, int b)
{
	int temp ;
	printf("Before Swapping :%d & %d",a , b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter Swapping :%d & %d",a , b);	
}

main()
{
	swap(6,97);
}
