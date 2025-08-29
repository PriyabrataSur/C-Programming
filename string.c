#include<stdio.h>
#include<string.h>

int main()
{
	/*char str[50], str1[] = "India ", str2[] = "sara janha se accha", str3[40];
	printf("Enter your address :");
	scanf("%[^\n]s",str) ;
	printf("your address :%s",str);
	
	puts(str1);
	puts(str2);
	int m = strlen(str1);
	int n = strlen(str2);
	printf("%d %d\n",m,n);
	strcat(str1,str2);
	puts(str1);
	puts(str2);
	strcpy(str3,str);
	puts(str3);
	
	char str4[]="Hi";
	printf("%s\n",strupr(str4));
	printf("%s\n",strlwr(str4));
	printf("%s\n",strrev(str4));
	
	char str5[] = "Priyabrata Sur", str6[] = "Subrata Sur";
	printf("%s",strstr(str5,str6));*/
	char s[40], i, count=0;
	printf("Enter the name of your school :");
	scanf("%[^\n]s",s) ;
	printf("School name :%s",s);
	while(s[i] != '\0')
	{
		count++;
		i++;
	}
	printf("\n%d",count);
	
	
}
