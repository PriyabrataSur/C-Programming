// Online C compiler to run C program online
#include <stdio.h>
#include<limits.h>

int main() {
    
    int arr[5], large, seclarge ,i;
    printf("Enter the elements of the array :");
    for(i=0; i<5; i++)
    {
        scanf("%d" ,&arr[i]);
    }
    large = arr[0];
    seclarge = INT_MIN;
    
    for(i=0; i<5; i++)
    {
        if(arr[i]>large)
        {
            seclarge = large ;
            large = arr[i];
        }
        else if(arr[i]<large && arr[i]>seclarge)
        {
            seclarge = arr[i];
        }
    }
    
    if(seclarge ==INT_MIN)
    {
        printf("All are equal");
    }else{
        printf("The largest element of the array is : %d", large);
        printf("\nThe second largest element of the array is : %d", seclarge);
    }
    
    
    return 0;
}
