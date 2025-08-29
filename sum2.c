#include<stdio.h>

double sum(double a);

double sum(double a)
{
	double sum=0;
	double i;
	for(i=1 ; i<=a; i++)
	{
		double k = i/(i+1);
		sum = sum + k;
	}
	return sum;	
}

main()
{
	int num;
	printf("Enter the number :");
	scanf("%d", &num);
	double p= sum(num);
	printf("The sum is :%lf",p);
}
