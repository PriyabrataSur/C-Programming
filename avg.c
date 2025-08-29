#include<stdio.h>

float average(float a);

float average(float a)
{
	float avg , sum=0;
	int i;
	for(i=1 ; i<=a; i++)
	{
		sum=sum+i;
	}
	avg = sum/a;
	return avg;
	
}

main()
{
	int num;
	printf("Enter the number :");
	scanf("%d", &num);
	float p= average(num);
	printf("The average of %d terms is :%f",num, p);
}
