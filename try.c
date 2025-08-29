#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, count = 0, dig, sum = 0 ;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp = n ;
    
    while(n != 0)
    {
        n=n/10;
        count++;
    }
    
    n = temp;
    while(n != 0)
    {
        dig = n%10;
        sum = sum + pow(dig,count);
        n=n/10;
    }
    
    if(temp == sum)
    {
        printf("Armstrong Number");
    }
    else{
        printf("Not a Armstrong Number");
    }
}
