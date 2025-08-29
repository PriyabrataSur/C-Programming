#include<stdio.h>
main()
{
	int side1 ,side2, side3 ;
	printf("Enter sides of a triange :");
	scanf("%d %d %d",&side1,&side2,&side3);
	if(side1+side2>side3 || side1<side2+side3 || side1+side3>side2) 
		printf("Triangle is possible");
	else
		printf("Triangle is not possible");
}
