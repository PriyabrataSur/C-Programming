#include<stdio.h>

main()
{
	int num , i ;
	printf("Enter a number :");
	scanf("%d",& num);
	printf("The divisors of the number is : ");
	for(i=1 ; i <= num ; i++)
	{
		if(num%i==0)
		{
			printf("%d\t",i);
		}
	}
}
