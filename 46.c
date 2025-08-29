// Sum of nth number
#include <stdio.h>

int main() {
    // Write C code here
    int num, sum =0 ;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num>=1)
    {
        sum = sum + num;
        num--;
    }
    printf("The sum of numbers is : %d",sum);

    return 0;
}
