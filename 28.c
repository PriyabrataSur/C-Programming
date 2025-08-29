#include<stdio.h>
main()
{	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	/*if(year%4==0) 
	{
		if(year%100==0 && year%400==0)
			printf("leap year");
		else if(year%100!=0)
			printf("leap year");
		else
			printf("Not a leap year");
	}*/
	if(((year%4==0)&&(year%100!=0)) || (year%400==0))
		printf("leap year");
	else
		printf("Non leap year");
}
