#include<stdio.h>
main()
{
	char sign;
	printf("Enter the number of a month :");
	scanf("%c",&sign);
	switch(sign)
	{
		case '+': printf("Summation");
				break;
		case '-': printf("Substraction");
				break;
		case '*': printf("Multiplication");
				break;
		case '/': printf("Division");
				break;
		case '=': printf("Equal");
				break;
		default :printf("Choice a right input ");
	}
}
