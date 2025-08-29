#include<stdio.h>

main()
{
	char alp ;
	printf("Enter anything :");
	scanf("%c",&alp);
	if(alp >= 'a' && alp <= 'z' || alp >= 'A' && alp <= 'Z')
	{
		printf("Alphabet");
	}
	else if(alp >= '0' && alp <= '9')
	{
		printf("Digit");
	}
	else
	{
		printf("Dpecial Character");
	}
}
