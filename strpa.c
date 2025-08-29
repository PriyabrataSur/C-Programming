#include<stdio.h>
#include<string.h>
#define MAX 100

int reverse(char st[MAX])
{
	int srt = 0 , end = strlen(st)-1 ;
	while(srt<end)
	{
		if(st[srt] != st[end])
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
	char st[MAX] ;
	int n;
	printf("Enter a string :");
	gets(st);
	n = reverse(st);
	if(n==1)
	{
		printf("Palindrome");
	 }
	 else
	 {
	 	printf("Not Palindrome");
	 }
}
