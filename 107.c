#include<stdio.h>

int pow(int n , int p)
{
	int f , power;
	if(p==0)
		return 1;
	f = pow(n, p-1);
	power = f * n;
	return power;
}
main()
{
	int n , p;
	printf("Enter the number :") ;
	scanf("%d",&n);
	printf("Enter the power :");
	scanf("%d",&p);
	int result = pow(n,p);
	printf("%d", result);
	
}
