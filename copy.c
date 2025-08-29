#include<stdio.h>
#define MAX 100
#include<string.h>

main()
{
	char str1[MAX], str2[MAX];
	int i;
	printf("Enter a string :");
	//scanf("%s",str1);
	gets(str1);
	while(str1[i] != '\0')
	{
		str2[i]=str1[i]	;
		i++ ;
	}
	puts(str2);
	//printf("%s",str2);
}

