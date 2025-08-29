#include<stdio.h>
main()
{
	/*(char str[10] = {'a','b','c','d','e','f','\0'};
	printf("%s\n",str);
	int i=0;
	while(str[i]!='\0')
	//{	printf("%c\n",str[i]);
		i++;
	})*/
	/*char str[10], s;
	int i;
	printf("Enter your name :");
	/*scanf("%s",str);
	scanf("%[^\n]s",str);
	for(i=0; i<10; i++){
		scanf("%c",&str[i]);
	}
	for(i=0; i<10; i++)
		printf("%c",str[i]);
		char st[100];
		printf("Enter name ");
		gets(st);
		puts(st);*/
	char str1[10] ="hellow hi";
	char str2[10] ="INDIA";
	puts(str1);
	puts(str2);
	int k= strlen(str1);
	printf("%d\n",k);
	
	
	/*str1 e print hobe total ta jod hoye*/ 
	strcat(str1,str2);
	puts(str1);
	
	
	puts(str2);
	char str3[10];
	strcpy(str3,str2);
	
	puts(str2);
	puts(str3);
	
	char s1[]="Hellow";
    printf("%s\n",strrev(s1));
    printf("%s\n",strlwr(s1));
    printf("%s\n",strupr(s1));
    char name[] =" Mahendra Singh Dhoni";
	char s2[] ="Dhoni";
	printf("%s ",strstr(name,s2));   
		
}
