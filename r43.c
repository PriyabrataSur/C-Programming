#include<stdio.h>
main()
{
	char sign;
	printf("Enter the sign of clculator:");
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
		case '^': printf("Power");
				break;
		default :printf("Choice a right input ");
	}
}
