// Online C compiler to run C program online
#include <stdio.h>
#include<limits.h>

int main() {
    
    int arr[5], small, secsmall ,i;
    printf("Enter the elements of the array :");
    for(i=0; i<5; i++)
    {
        scanf("%d" ,&arr[i]);
    }
    small = arr[0];
    secsmall = INT_MIN;
    
    for(i=0; i<5; i++)
    {
        if(arr[i]<small)
        {
            secsmall = small ;
            small = arr[i];
        }
        else if(arr[i]>small && arr[i]<secsmall)
        {
            secsmall = arr[i];
        }
    }
    
    if(secsmall ==INT_MIN)
    {
        printf("All are equal");
    }else{
        printf("The smallest element of the array is : %d", small);
        printf("\nThe second smallest element of the array is : %d", secsmall);
    }
    
    
    return 0;
}
