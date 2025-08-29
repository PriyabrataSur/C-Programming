#include<stdio.h>
main()
{
	int num;
	printf("Enter the number of a day :");
	scanf("%d",&num);
	if(num ==1)
		printf("Sunday");
	else if(num==2)
		printf("Monday");
	else if(num==3)
		printf("Tuesday");
	else if(num==4)
		printf("Wednesday");
	else if(num==5)
		printf("Thursday");	
	else if(num==6)
		printf("Friday");
	else if(num==7)
		printf("saturday");
	else
		printf("Wrong input");
}
