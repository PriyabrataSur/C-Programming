#include<stdio.h>

void digit(int a);

void digit (int a)
{
	int k = 1, n, b, temp;
	temp = a ;
	while(temp>10)
	{
		b= temp%10;
		temp=temp/10;
		k= k*10;
	}
	printf("The digits of the number :");
	while(a!=0)
	{
		n=a/k;
		a=a%k;
		k=k/10;
		printf("%d\n",n);
	}
	
	
}

main()
{
	int num ;
	printf("Enter the number :");
	scanf("%d", &num);
	digit(num);
}
