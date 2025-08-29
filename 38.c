#include<stdio.h>
main()
{
	int side1 ,side2, side3 ;
	printf("Enter sides of a triange :");
	scanf("%d %d %d",&side1,&side2,&side3);
	if(side1==side2 && side2==side3 &&side1==side3) 
		printf("It is an equilateral triangle");
	else if((side1==side2 && side2!=side3 )||(side3==side1 && side3!=side2) ||(side3==side2&&side2!=side1))
		printf("It is an isoscles triangle");
	else if(side1!=side2 && side2!=side3 && side1!=side3)
		printf("It is a scalene triangle");
}
