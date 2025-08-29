#include<stdio.h>
main()
{
	int amount, note1, note2, note3, note4, note5, coin;
	printf("Enter the amount :");
	scanf("%d",&amount);
	if(amount<=5000)
	{
		note1 = amount /100;
		printf("The number of notes of 100 is :%d",note1);
		amount =amount-note1*100;
		note2=amount/50;
		printf("\nThe number of notes of 50 is :%d",note2);
		amount =amount-note2*50;
		note3=amount/10;
		printf("\nThe number of notes of 10 is :%d",note3);
		coin=amount-note3*10;		
		printf("\nThe number of coins is :%d",coin);
	}
	else if(amount>5000 && amount <=20000)
	{
		note1 = amount /500;
		printf("The number of notes of 500 is :%d",note1);
		amount =amount-note1*500;
		note2=amount/100;
		printf("\nThe number of notes of 100 is :%d",note2);
		amount =amount-note2*100;
		note3=amount/50;
		printf("\nThe number of notes of 50 is :%d",note3);
		amount =amount-note3*50;
		note4=amount/10;
		printf("\nThe number of notes of 10 is :%d",note4);
		coin=amount-note4*10;		
		printf("\nThe number of coins is :%d",coin);
	}
	else if(amount>20000)
		{
		note1= amount /2000;
		printf("The number of notes of 2000 is :%d",note1);
		amount =amount-note1*2000;
		note2 = amount /500;
		printf("\nThe number of notes of 500 is :%d",note2);
		amount =amount-note2*500;
		note3=amount/100;
		printf("\nThe number of notes of 100 is :%d",note3);
		amount =amount-note3*100;
		note4=amount/50;
		printf("\nThe number of notes of 50 is :%d",note4);
		amount =amount-note4*50;
		note5=amount/10;
		printf("\nThe number of notes of 10 is :%d",note5);
		coin=amount-note5*10;		
		printf("\nThe number of coins is :%d",coin);
		
	}
	
}

