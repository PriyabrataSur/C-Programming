#include<stdio.h>
#include<string.h>
#define MAX 100

//void reverse(int a, int b, int arr[]);

void reverse( char str[MAX], int si, int ei)
{
	int srt= si , end= ei;
	while(srt<end)
	{
		swap(str, srt, end);
		srt++;
		end--;
	}
}

void swap(char str[MAX], int si, int ei)
{
	int temp , srt=si , end= ei;
	temp = str[srt];
	str[srt] = str[end];
	str[end]= temp;
}

void rotate(char str[MAX], int k)
{
	reverse(str, 0 , strlen(str)-1-k);
	reverse(str, strlen(str)-k , strlen(str)-1);
	reverse(str, 0, strlen(str)-1);
}

main()
{
	int i, n, k;
	char str[MAX];
	/*printf("Enter the number of elements :");
	scanf("%d",&n);*/
	printf("Enter the elements :");
	/*for(i=0;i<n;i++)
	{
		scanf("%c",&str[i]);
	}*/
	gets(str);
	//printf("Enter the duration of reversing in the array :");
	//scanf("%d%d",&ind1, &ind2);
	printf("Enter the reversing index from back :");
	scanf("%d",&k);
	rotate(str, k);
	printf("After rotation :");
	/*for(i=0 ; i<n ; i++)
	{
		printf("%c\n",str[i]);
	}*/
	puts(str);	
}
