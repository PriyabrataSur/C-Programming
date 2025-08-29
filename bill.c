#include<stdio.h>
int main()
{
	double prevSal, da, newSal;
	printf("Enter your basic salary : ");
	scanf("%lf %lf",&prevSal, &newSal);
	da = (newSal - prevSal)*3.75;
	printf("%lf",da);
}
