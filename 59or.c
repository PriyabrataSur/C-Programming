#include<stdio.h>
main()
{
	int dig, num, n, k=1, count =0;
	printf("Enter the number :");
	scanf("%d",&num);
	int temp = num;
	while(temp>10)
	{
		n=temp%10;
		temp=temp/10;
		count++;
		k=k*10;
	}	
	printf("The digits of the number is :");
	while(num!=0)
	{
		dig=num/k;
		num=num%k;
		k=k/10;
		printf("%d\n",dig);
	}
}
