#include<stdio.h>
main()
{
	int num1, num2 , i,count =0;
	printf("Enter the number :");
	scanf("%d",&num1);
	printf("The number you want to count :");
	scanf("%d",&num2);
	while(num1!=0)
	{
		i=num1%10;
		num1 = num1/10;
		if(i==num2)
		{
			count++;
		}	
	}
	printf("%d",count);	
}
