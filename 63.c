#include<stdio.h>
main()
{
	int num1 =0, num2=1 ,num3 =0, i,n;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("The fibonacci series is :");
	for( i=1 ; i<=n ; i++)
	{
		printf("%d ",num1);
		num3=num1+num2;
		num1=num2;
		num2=num3;
	}
}
