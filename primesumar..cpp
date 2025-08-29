#include<stdio.h>

int main()
{
	int arr[5] ,i , sum =0 , n ,flag =0;
	printf("Enter the elements of the array :");
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<5; i++)
	{
	     for( n =2 ; n <= arr[i]/2 ; n++)
        {
             if(arr[i] % n == 0 )
                flag =1 ;
        }
        
        if(flag ==0)
		    sum = sum + arr[i];
		    flag =0;
	}
	printf("Sum of the prime numbers of the array :%d",sum);
}
