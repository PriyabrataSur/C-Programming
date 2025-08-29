// Linear Search

#include <stdio.h>

int main() {
   
    int arr[5], i , n , pos , flag =0;
    printf("Enter the elements of the array :");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element you want to find :");
    scanf("%d",&n);
    
    /*for(i=0; i<5; i++)
    {
        if(n==arr[i])
        {
            //pos =i;
            printf("The position of the element :%d", i);
            flag =1;
            break ;
        }
    }
    if(flag ==0)
    {
        printf("Not found");
    }
    return 0;*/
    
    for(i=0; i<5; i++)
    {
        if(n==arr[i])
        {
            //pos =i;
            printf("The position of the element :%d", i+1);
            //flag =1;
            //break ;
            return;
        }
    }
    printf("Not found");
}
