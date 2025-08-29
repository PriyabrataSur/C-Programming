#include<stdio.h>
main()
{
	int num, i , rev =0;
	printf("Enter the number : ");
	scanf("%d",&num);
	while(num!=0)
	{
		i=num%10;
		num = num/10;
		rev = rev *10 +i;
	}
	printf("The reverse of the number is :%d",rev);
}
