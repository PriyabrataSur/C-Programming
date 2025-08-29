#include<stdio.h>

main()
{
	char alp ;
	printf("Enter the alphabet :");
	scanf("%c",&alp);
	if(alp >= 'a' && alp <= 'z' || alp >= 'A' && alp <= 'Z')
	{
		printf("Alphabet");
	}
	else
	{
		printf("Not Alphabet");	
	}
}
