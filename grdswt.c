#include<stdio.h>

main()
{
	int num;
	printf("Enter your mark :");
	scanf("%d",&num);
	int n = num/10;
	if(num<=100 && num>=0)
	{
		printf("Your grade : ");
		switch(n)
		{
			case 10 : 
			case 9: printf("O");
					break;
			case 8: printf("E");
					break;
			case 7: printf("A");
					break;
			case 6: printf("B");
					break;
			case 5: printf("C");
					break;
			case 4: printf("D");
					break;
			default: printf("F(FAILED)");
		}
	}
	else
	{
		printf("Wrong Input");
	}
	
}
