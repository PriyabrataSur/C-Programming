#include<stdio.h>

main()
{
	int num, i, sum=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(i=1; i<=num ;i++)
	{
		sum=sum+i;
	}
	printf("Sum of numbers :%d",sum);
}
