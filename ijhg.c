#include<stdio.h>
main()
{
	int num1 =0, num2=1 ,num3, count = 0,n;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("The fibonacci series is :");
	if(count<n)
	{
		printf("%d ",num3);
		num3=num1+num2;
		num1=num2;
		num2=num3;
		count ++;
	
	}
}
