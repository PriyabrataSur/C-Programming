#include <stdio.h>

int main()
{
    int n , i , j , k ; 
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i =0 ; i<=n ; i++)
    {
    	k=n-i;
        for(j =1 ; j<=n-i ; j++)
        {
            printf("%d ",k);
            k--;
    	}
        printf("\n");
    }
}
