#include<stdio.h>
main()
{
	int side1, side2, area, peri ;
	printf(" Enter the two sides of a parallelogram :");
	scanf("%d %d",&side1 ,&side2);
	area=side1*side2;
	peri=2*(side1+side2);
	printf(" The area of the parallelogram : %d",area);
	printf("\n The perimeter of the parallelogram : %d",peri);
}
