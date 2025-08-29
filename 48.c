#include<stdio.h>

int main()
{
    int num, fact = 1;
    printf("Enter the number of factorial :");
    scanf("%d", &num);
    while(num>=1)
    {
        fact = fact * num;
        num--;
    }
    printf("The ans of factorial :%d", fact);
    return 0;
}
