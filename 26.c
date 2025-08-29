#include<stdio.h>
main()
{
	int num;
	printf("Enter te number : ");
	scanf("%d",&num);
	if(num%5==0 && num%11==0)
		printf("Number is devisible by 5 and 11");
	else
		printf("Not devisible by 5 and 11");
}
