#include<stdio.h>

int main()
{
    int num,i , fact = 1;
    printf("Enter the number of factorial :");
    scanf("%d", &num);
    for ( i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("The ans of factorial :%d", fact);
    return 0;
}
