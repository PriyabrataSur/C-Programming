#include<stdio.h>
main()
{
	int num, i , store ,rev =0;
	printf("Enter the number : ");
	scanf("%d",&num);
	store = num;
	while(num!=0)
	{
		i=num%10;
		num = num/10;
		rev = rev *10 +i;
	}
	
	if(rev==store)
		printf("Palindrome Number");
	else
		printf("Not Palindrome Number");
}
