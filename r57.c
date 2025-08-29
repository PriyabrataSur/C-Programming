#include<stdio.h>

main()
{
	int num, i;
	printf("Enter the number :");
	scanf("%d",&num);
	printf("The digits of the number :-");
	while(num!=0)
	{
		i=num % 10;
		num = num / 10;
		printf("\n%d",i);
	}
}
