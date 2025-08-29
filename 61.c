#include <stdio.h>
#include<math.h>

int main() 
{
    int n , i , num , sum =0 ;
    printf("Enter the number : ") ;
    scanf("%d", &n) ;
    num = n;
    while(n>0)
    {
        i=n%10;
        sum = sum + (i*i*i) ;
        n=n/10;
    }
    if(sum==num)
        printf("Armstrong number") ;
    else
        printf("Not Armstrong number") ;
    return 0;
}

