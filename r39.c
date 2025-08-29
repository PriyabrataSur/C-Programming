#include<stdio.h>

main()
{
	int num;
	printf("Enter your mark :");
	scanf("%d",&num);
	printf("Your grade : ");
	if(num<=100 && num>90)
		printf("Excellent");
	else if(num<=90 && num>80)
		printf("Good");
	else if(num<=80 && num>70)
		printf("Fair");
	else if(num<=70 && num>60)
		printf("Meets expectation");
	else if(num<=60)
		printf("Below par");
	else
		printf("!!! Enter your number correctly !!!");
}
