#include<stdio.h>
#define MAX 100

main()
{
	int arr[MAX] , i, n , val;
	printf("Enter the number of elements of the array :");
	scanf("%d",&n);
	printf("Enter the elements of the array :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n/2; i++)
	{
		val = arr[i];
//		printf("val%d\n",val);
		arr[i]= arr[n-1-i];
//		printf("v--%d\n",arr[n-1-i]);
		arr[n-1-i] = val;
	}
	printf("The reverse element of the array:");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\n",arr[i]);
	}
}
