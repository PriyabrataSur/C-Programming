#include <stdio.h>
#include <string.h>

int main() 
{
    char arr[50] , temp ;
    printf("Enter your name :");
    scanf("%[^\n]s",arr);
	int s =0;
	int e = strlen(arr)-1;
	
	printf("The string : ");
	printf("%s\n",arr);
	//printf("\nhellow");
	while(s<e){
		temp= arr[e];
		arr[e]=arr[s];
		arr[s]=temp;
		s++;
		e--;
	}
	//printf("\nhellow");
	printf("The reverse of the string : ");
	puts(arr);

    return 0;
}
