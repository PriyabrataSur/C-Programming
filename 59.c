#include<stdio.h>
main()
{
	int num1, num2, i ,dig , rev =0;
	printf("Enter the number : ");
	scanf("%d",&num1);
	while(num1!=0)
	{
		i=num1%10;
		num1 = num1/10;
		rev = rev *10 +i;
	}
	num2= rev;
	printf("\nDigits of the number :");
	while(num2!=0)
	{
		dig=num2%10;
		num2 = num2/10;
		printf("%d\n",dig);
	}

}
