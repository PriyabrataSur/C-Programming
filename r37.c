#include<stdio.h>

main()
{
	int sd1 , sd2 , sd3 ;
	printf("Enter the sides of the triangle :");
	scanf("%d %d %d",&sd1, &sd2, &sd3);
	if(sd1 + sd2 > sd3 || sd1 + sd3 > sd2 || sd2 +sd3 >sd1)
	{
		printf("The triangle is VALID");
	}
	else
	{
		printf("The triangle is INVLALID");
	}
}
