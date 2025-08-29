#include<stdio.h>

main()
{
	int angl1 , angl2 , angl3 ;
	printf("Enter the angles of the triangle :");
	scanf("%d %d %d",&angl1, &angl2, &angl3);
	if(angl1 + angl2 + angl3 == 180)
	{
		printf("The triangle is VALID");
	}
	else
	{
		printf("The triangle is INVLALID");
	}
}
