#include<stdio.h>
main()
{
	int num, i , sum = 0;
	printf("Enter the number : ");
	scanf("%d", & num);
	while(num != 0)
	{
		i = num % 10;
		num = num / 10;
		sum = sum + i;
		
	}
	printf("The sum of the digits :%d",sum);
}
