#include<stdio.h>

main()
{
	int num1, num2 ,n , i, flag =0;
	printf("Enter two numbers :");
	scanf("%d %d", &num1 , &num2);
	printf("Prime numbers between %d and %d are :", num1 , num2) ;
	for(n=num1 ; n<=num2 ; n++)
	{
		flag = 0;
		for( i=2 ; i<=n/2 ; i++)
    	{
        	if(n%i==0)
        	{
				flag = 1;	
			}
    	}
		if(flag == 0)
		{
			printf("%d\n",n);
		}
	}
}
