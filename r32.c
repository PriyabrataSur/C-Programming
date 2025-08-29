#include<stdio.h>

main()
{
	char alp ;
	printf("Enter the alphabet :");
	scanf("%c",&alp);
	if(alp >= 'a' && alp <= 'z')
	{
		printf("Lowercase Alphabet");
	}
	else
	{
		printf("Uppercase Alphabet");	
	}
}
