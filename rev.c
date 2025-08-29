#include<stdio.h>

int reverse(int a);

int reverse(int a)
{
	int rev = 0, n;
	while(a!=0)
	{
		n=a%10;
		a=a/10;
		rev = rev*10 +n;
	}
	return rev;
}

main()
{
	int num;
	printf("Enter the number you want to reverse :");
	scanf("%d",&num);
	int p = reverse(num);
	printf("The reverse of the number is :%d", p);
}
