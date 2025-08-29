#include<stdio.h>

void swap();

void swap()
{
	int temp , a =6 , b=9;
	printf("Before Swapping :%d & %d",a , b);
	temp = a;
	a=b;
	b= temp;
	printf("\nAfter Swapping :%d & %d",a , b);	
}

main()
{
	swap();
}
