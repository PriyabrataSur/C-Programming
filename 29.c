#include<stdio.h>
main()
{
	char alp;
	printf("Enter the character : ");
	scanf("%c",&alp);
	if((alp>=97 &&alp<=122) || (alp>=65 && alp<=90))
		printf("Alphabet");
	else
		printf("Not Alphabet");
}
