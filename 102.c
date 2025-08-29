#include<stdio.h>
#include<string.h>
#define MAX 100

int reverse( char str[])
{
	int srt = 0 , end = strlen(str)-1 ;
	while(srt < end)
	{
		if(str[srt] != str[end])
		{
			return 0;
		}
		srt++;
		end--;
	}
	return 1;
}
main()
{
	char str[MAX] ;
	int n;
	printf("Enter anything :");
	scanf("%s",str) ;
	/*n=strlen(str1);
	printf("%d\n",n);
	str2[n]= strrev(str1);
	if(str1[n]==str2[n])
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}*/
	n = reverse(str);
	if(n == 1)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
}
	
