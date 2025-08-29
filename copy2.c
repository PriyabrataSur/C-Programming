#include<stdio.h>
#define MAX 100
#include<string.h>

void myStrcpy(int str2[], int str1[])
{
	int i=0;
	while(str1[i] != '\0')
	{
		str2[i]=str1[i]	;
		i++ ;
	}
	puts(str2);
}

main()
{
	char str1[MAX], str2[MAX];
	printf("Enter a string :");
	gets(str1);
	myStrcpy(str2, str1);
}

