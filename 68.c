#include<stdio.h>

main()
{
	int num, pow , mul=1 , i;
	printf("Enter the number :");
	scanf("%d",&num);
	printf("Enter the power :");
	scanf("%d",&pow);
	for(i=1; i<=pow ; i++)
	{
		mul= mul*num;
		
	}
	printf("%d",mul);
}
