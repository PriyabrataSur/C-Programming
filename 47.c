// Sum of two between numbers
#include <stdio.h>

int main() 
{
    // Write C code here
    int num1, num2, sum =0 ;
    printf("Enter two numbers in between the sum : ");
    scanf("%d %d",&num1, &num2);
    while(num1<=num2)
    {
        sum = sum + num1;
        num1++;
    }
    printf("The sum of numbers is : %d",sum);
    return 0;
}
