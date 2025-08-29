#include<stdio.h>

main()
{
	char s[50] , n[50] , i , j ;
	printf("Enter anything :") ;
	scanf("%[^\n]s", s ) ;
	printf("The string : %s", s ) ;
	
	while( s[i] != '\0' )
	{
		n[j] = s[i] ;
		i++ ;
		j++ ;
	}
	
	printf("\nAfter copying the string :%s", n );
}
