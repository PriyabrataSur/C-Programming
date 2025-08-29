#include<stdio.h>

main()
{
	int a, b , c;
	printf("Enter 3 numbers :");
	scanf("%d %d %d", &a, &b, &c);
	if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
		printf("It is a Pythagorean Triplet");
	else
		printf("It is NOT a Pythagorean Triplet");
}
