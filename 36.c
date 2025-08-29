#include<stdio.h>
main()
{
	int angle1 ,angle2, angle3 ;
	printf("Enter sides of a triange :");
	scanf("%d %d %d",&angle1,&angle2,&angle3);
	if(angle1+angle2+angle3==180) 
		printf("Triangle is possible");
	else
		printf("Triangle is not possible");
}
