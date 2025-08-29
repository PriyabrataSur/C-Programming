#include<stdio.h>
main()
{
	int num, i ,rev, temp ;
	printf("Enter the number :");
	scanf("%d",&num);
	temp = num;
	while(num!=0)
	{
		i = num%10;
		num = num/10;
		rev = rev *10 +i;
	}
	
	if(rev == temp)
		printf("Palindrome Number");
	else
		printf("Not Palindrome Number");
}
