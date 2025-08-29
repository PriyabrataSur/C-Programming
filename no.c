#include<stdio.h>
#define MAX 100

main()
{
	int i, n, arr[MAX];
	printf("Enret the number of elements :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int srt=0, end=n-1, temp;
	while(srt<end)
	{
		temp=arr[srt];
		arr[srt] =  arr[end];
		arr[end] = temp;
		srt++;
		end--;
	}
	printf("The reverse of array :");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
		}	
}
