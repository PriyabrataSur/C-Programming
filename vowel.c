#include<stdio.h>
main()
{
	char alp;
	printf("Enter the character : ");
	scanf("%c",&alp);
	if(alp=='a'||alp=='e'||alp=='i'||alp=='o'||alp=='u'||alp=='A'||alp=='E'||alp=='I'||alp=='O'||alp=='U')
		printf("Vowel");
	else
		printf("Consonent");
}
