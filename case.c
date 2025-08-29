#include<stdio.h>
main()
{
	char alp;
	printf("Enter the character : ");
	scanf("%c",&alp);
	if(alp>='a' &&alp<='z') 
		printf("Lowercase");
	else if(alp>='A' && alp<='Z')
		printf("Uppercase");
	else
		printf("Wrong input");
}
