#include<stdio.h>

int main()
{
	int num;
	printf("Enter your mark :");
	scanf("%d",&num);
	printf("Your grade : ");
	if(num<=100 && num>=90)
		printf("O");
	else if(num<90 && num>=80)
		printf("E");
	else if(num<80 && num>=70)
		printf("A");
	else if(num<70 && num>=60)
		printf("B");
	else if(num<60 && num>=50)
		printf("C");
	else if(num<50 && num>=40)
		printf("D");
	else if(num<40)
		printf("F(FAILED)");
	else
		printf("!!! Enter your number correctly !!!");
}
