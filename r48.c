#include<stdio.h>

main()
{
	int num , fact = 1;
	printf("Enter the number :");
	scanf("%d", &num);
	while(num>0)
	{
		fact = fact * num;
		num--;
	}
	printf("Factorial :%d", fact);
}
