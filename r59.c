#include<stdio.h>

main()
{
	int num, i, j, rev;
	printf("Enter the number :");
	scanf("%d",&num);
	while(num!=0)
	{
		i=num % 10;
		num = num / 10;
		rev = rev *10 + i;
	}
	printf("The digits of the number :-");
	while(rev!=0)
	{
		j=rev % 10;
		rev = rev / 10;
		printf("\n%d",j);
	}
}
