#include<stdio.h>

void decrease(int n)
{
	int k = n , i;
	for(i=k ; i>0 ; i--)
	{
		printf("%d\n",i);
	}
}

main()
{
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	decrease(n);
}
