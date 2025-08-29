#include<stdio.h>
main()
{
	char alp;
	printf("Enter the character : ");
	scanf("%c",&alp);
	printf("It is : ");
	if((alp>='a' &&alp<='z') && (alp>='A' && alp<='Z'))
		printf("Alphabet");
	else if(alp>='0' && alp<='9')
		printf("Digit");
	else
		printf("Special character");
}
