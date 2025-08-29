#include<stdio.h>

main()
{
	int num , i , flag =0;
	printf("Enter the number :");
	scanf("%d",&num);
	for(i=2 ; i<=num/2 ; i++)
	{
		if(num%i==0)
		{
			flag = 1;
		}
	}
	if(flag == 1)
	{
		printf("Not Prime");
	}
	else
	{
		printf("Prime");
	}
}
