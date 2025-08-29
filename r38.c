#include<stdio.h>
main()
{
	int sd1 ,sd2, sd3 ;
	printf("Enter sides of a triange :");
	scanf("%d %d %d",&sd1, &sd2, &sd3);
	if(sd1 == sd2 && sd2 == sd3 && sd1 == sd3) 
	{
		printf("It is an equilateral triangle");
	}
	else if((sd1 == sd2 && sd2 != sd3 )||(sd3 == sd1 && sd3 != sd2) ||(sd3 == sd2 && sd2 != sd1))
	{
		printf("It is an isoscles triangle");
	}
	else if(sd1 != sd2 && sd2 != sd3 && sd1 != sd3)
	{
		printf("It is a scalene triangle");
	}
}
