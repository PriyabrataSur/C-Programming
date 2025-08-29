#include<stdio.h>

main()
{
	char s[40], i, count=0;
	printf("Enter the name of your school :");
	scanf("%[^\n]s",s) ;
	printf("School name :%s",s);
	while(s[i] != '\0')
	{
		count++;
		i++;
	}
	printf("\nLegth of the string :%d",count);
	
}
