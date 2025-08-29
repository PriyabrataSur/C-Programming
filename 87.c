#include<stdio.h>
#define MAX 100

//void reverse(int a, int b, int arr[]);

void reverse( int arr[],int si, int ei)
{
	int temp, srt=si , end= ei;
	while(srt<end)
	{
		swap(arr, srt, end);
		srt++;
		end--;
	}
}

void swap(int arr[], int si, int ei)
{
	int temp , srt=si , end= ei;
	temp = arr[srt];
	arr[srt] = arr[end];
	arr[end]= temp;
}

void rotate(int arr[], int n, int k)
{
	reverse(arr, 0 , n-k-1);
	reverse(arr, n-k , n-1);
	reverse(arr, 0, n-1);
}

main()
{
	int i, n, arr[MAX], k;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//printf("Enter the duration of reversing in the array :");
	//scanf("%d%d",&ind1, &ind2);
	printf("Enter the reversing index from back :");
	scanf("%d",&k);
	rotate(arr, n, k);
	printf("After rotation :");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\n",arr[i]);
	}	
}
