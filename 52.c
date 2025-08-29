// Sum of two between numbers
#include <stdio.h>

int main() 
{
    // Write C code here
    int num1, num2,i, sum =0 ;
    printf("Enter two numbers in between the sum : ");
    scanf("%d %d",&num1, &num2);
    for(i=num1; i<=num2 ; i++)
    {
        sum = sum + i;
    }
    printf("The sum of numbers is : %d",sum);
    return 0;
}
