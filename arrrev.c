#include<stdio.h>
#define MAX 100

main()
{
	int i, n, temp, arr[MAX];
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}	
	printf("The elements of the array before reversing:");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\n",arr[i]);
	}	
	int srt=0;
	int end= n-1;
	while(srt<end)
	{
		temp = arr[srt];
		arr[srt] = arr[end];
		arr[end]= temp;
		srt++;
		end--;
	}
	printf("The elements of the array after reversing :");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\n",arr[i]);
	}	
}
