#include<stdio.h>
main()
{
	int num, i , count =0;
	printf("Enter the number : ");
	scanf("%d",&num);
	while(num!=0)
	{
		i=num%10;
		num = num/10;
		count++;
	}
	printf("Total digits in the number is :%d",count);
}
