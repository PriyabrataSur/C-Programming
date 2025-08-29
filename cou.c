#include<stdio.h>
main()
{
	char str[100]/*={'a','b',' ','c','d','\0'}*/, i=0, count=0;
	printf("Enter your address :");
	scanf("%[^\n]s",str);
	printf("%s\n",str);
	while(str[i]!='\0'){
		count ++;
		i++;
	}
	printf("%d", count);
}
