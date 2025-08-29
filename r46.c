#include<stdio.h>

main()
{
	int num , sum = 0;
	printf("Enter the number :");
	scanf("%d", &num);
	while(num>0)
	{
		sum = sum + num;
		num--;
	}
	printf("Sum :%d", sum);
}
