#include<stdio.h>

main()
{
	int num ;
	printf("Enter the number :");
	scanf("%d",&num);
	if(num%5==0 && num%11==0)
	{
		printf("%d Divisible by 5 & 11", num);
	}
	else
	{
		printf("Not divisible");
	}
}
