#include<stdio.h>

void swap(int a, int b);

void swap(int a, int b)
{
	int temp ;
	printf("Before Swapping :%d & %d",a , b);
	temp = a;
	a=b;
	b= temp;
	printf("\nAfter Swapping :%d & %d",a , b);	
}

main()
{
	swap(6,97);
}
