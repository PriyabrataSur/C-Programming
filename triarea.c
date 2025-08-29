#include<stdio.h>
main()
{
	int side1 ,side2;
	float area;
	printf("Enter base and height of the triangle : ");
	scanf("%d %d",&side1 ,&side2);
	area = .5*side1*side2 ;
	printf("The area of the triangle : %f",area);
}
