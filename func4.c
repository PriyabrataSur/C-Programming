#include<stdio.h>

void swap();

void swap()
{
	int a =6 , b=9;
	printf("Before Swapping :%d & %d",a , b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter Swapping :%d & %d",a , b);	
}

main()
{
	swap();
}
