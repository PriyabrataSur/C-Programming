#include<stdio.h>
//#include<math.h>

int main()
{
	int i, n, sum = 0 ;
	printf("Enter the number & the term:");
	scanf("%d",&n);
	for(i = 1; i<=2*n ; i++)
	{
		if(i%2 == 0)
			sum = sum + i;
	}
	printf("The Sum value is :%d",sum);
}
