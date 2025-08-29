#include<stdio.h>

factorial(int n)
{
	int i ,fact = 1 ;
	for(i=1; i<=n ; i++)
	{
		fact = fact *i;
	} 
	return fact;
}

main()
{
	int num , ans;
	printf("Enter the number of factorial :");
	scanf("%d",&num);
	ans = factorial(num);
	printf("Factorial : %d",ans);
}
