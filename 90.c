#include<stdio.h>
#define MAX 100

void scanArray(int arr[], int n)
{
	int i;
	for(i=0 ; i<n ; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void printArray(int arr[], int n)
{
	int i;
	for(i=0 ; i<n ; i++)
	{
		printf("%d\t", arr[i]);
	}
}

void swap(int arr[], int j)
{
	int temp ;
	temp = arr[j];
	arr[j] = arr[j+1];
	arr[j+1]= temp;
}
void bubbleSort(int arr[], int n)
{
	int i , j ;
	for(i=0 ; i<n-1 ; i++)								//for number of pass
	{
		printf("\nWork_Pass : %d",i+1);
		for(j=0 ; j<n-1-i ; j++)						//for comparisons in each pass
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr, j);
			}
		}
	}
	
}

main()
{
	int arr[MAX], n , i , len ;
	printf("Enter the number of the elements of the array :");
	scanf("%d", &n);
	printf("Enter the elements of the array :");
	scanArray(arr, n);
	//len = n-1;
	printf("The array before sorting :");
	printArray(arr, n);
	bubbleSort(arr, n);
	printf("\n\n");
	printf("The array after sorting :");
	printArray(arr, n);
	
}
