#include<stdio.h>

int main()
{
	int total, bill;
	printf("Enter your Bill :");
	scanf("%d",&bill);
	printf("Your total amount : ");
	if(bill>=0 && bill<=200)
	{
		total = bill*.50;
	}
	else if(bill>200 && bill<=400)
	{
		total = 100 + (bill-200)*.65;
	}
	else if(bill>400 && bill<=600)
	{
		total = 250 + (bill-400)*.80;
	}
	else if(bill>600)
	{
		total = 425 + (bill-600)*1.25;
	}
	else 
	{
		printf("Wrong Input");
	}
	printf("%d",total);
}
