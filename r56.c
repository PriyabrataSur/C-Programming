#include<stdio.h>

main()
{
	int num, count = 0;
	printf("Enter the number :");
	scanf("%d",&num);
	while(num!=0)
	{
		//i=num % 10;
		num = num / 10;
		count++;
	}
	printf("Number of digits :%d",count);
}
