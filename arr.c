#include<stdio.h>
int i,j;

int func1(int arr2[])
{
	for(i =0; i<6; i++)
	{
		printf("%d\n",arr2[i]);
	}
}

int func2(int *ptr)
{
		for(i =0; i<6; i++)
			printf("%d\n",*(ptr+i));
}

int func3(int arr[2][3])
{
	for(i =0; i<2; i++)
	{
		for(j =0; j<3; j++)
		{
			printf("%d\t%d\t%d\n",i,j,arr[i][j]);
		}
	}
}

main()
{
	int arr[2][3]= {{52, 53, 23},{ 18  ,96 ,81}};
	//func1(arr);
	func3(arr);
}
