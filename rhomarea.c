#include<stdio.h>
main()
{
	int side1, side2, area, peri ;
	printf(" Enter the side and height of a rhombus :");
	scanf("%d %d",&side1 ,&side2);
	area=side1*side2;
	peri=4*side1;
	printf(" The area of the rectangle : %d",area);
	printf("\n The perimeter of the rectangle : %d",peri);
}

