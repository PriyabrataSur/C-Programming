// A perfect number is a positive integer that is equal to the sum of its proper divisors
// 6 = 0+1+2+3  ;  28 = 1+2+4+7+14

#include<stdio.h>

int main()
{
	int num , sum = 0 , i ;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(i = 1 ; i<=num/2 ; i++)
	{
    	if(num%i==0){
        	sum = sum + i ;
    	}	
	}
	if(sum==num)
	{
    	printf("Perfect number ");
	}
	else{
    	printf("Not a perfect number ");
	}
	return 0;
}
