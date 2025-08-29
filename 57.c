#include<stdio.h>
main()
{
	int num, i ;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("The reverse order of the number is :");
	while(num!=0)
	{
		i=num%10;
		num = num/10;
		printf("%d\n",i);
	}
	
}
