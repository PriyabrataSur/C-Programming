#include<stdio.h>

main()
{
	char i, j, num ;
	printf("Enter the last alphabet(Uppercase) of th pattren :");
	scanf("%c",&num);
	for(i='A'; i<=num; i++)
	{
		printf("\n");
		
		for(j='A'; j<=i; i++)
		{
			printf("%c ",i);
		}
	}
}
