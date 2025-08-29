#include<stdio.h>
main()
{
	int num;
	printf("Enter your marks : ");
	scanf("%d",&num);
	printf("Your grade : ");
	if(num>90 && num<=100) 
		printf("Excellent");
	else if(num>80 && num<=90)
		printf("Good");
	else if(num>70&& num<=80)
		printf("Fair");
	else if(num>60 && num<=70)
		printf("Meets Expectation");
	else if(num<=60)
		printf("Below par");
	else
		printf("Wrong input");
}
