#include<stdio.h>
main()
{
	int side1 ;
	float peri, area;
	printf("Enter side of the equilateral triangle : ");
	scanf("%d",&side1);
	peri =3*side1;
	area= .433 *side1 *side1;
	printf("The area of the equilateral triangle : %f",area);
	printf("\nThe perimeter of the equilateral triangle : %f",peri);
}
