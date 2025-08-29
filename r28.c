#include<stdio.h>

main()
{
	int yer ;
	printf("Enter the year :");
	scanf("%d",&yer);
	if(yer % 100 == 0)
	{
		if(yer % 400 == 0)
		{
			printf("Leap Year");
		}
		else
		{
			printf("Non Leap Year");
			//break;
		}
	}
	else if(yer % 4 == 0)
	{
		printf("Leap Year");
	}
}
