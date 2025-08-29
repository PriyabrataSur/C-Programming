#include<stdio.h>
//#define MAX 100

int main(){
	int  num, i;
	printf("Enter the number of elements of the array: ");
	scanf("%d",&num);
	int low = 0, high = num-1, mid, k;
	int arr[num];
	printf("Enter the elements of the array: ");
	for(i = 0; i< num ; i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to find: ");
	scanf("%d",&k);
	/*for(i = 0; i< num ; i++){
		mid = (high + low)/2;
		if(arr[mid]==k){
			printf("The element id find at %d", mid +1);
			return;
		}
		else if(arr[mid]<=k){
			low = mid + 1;
		}
		else if(arr[mid]>=k){
			high = mid - 1;
		}
	}*/
	
	/*int flag = 0;
	while(low<=high){
		mid = (high + low)/2;
		if(arr[mid]==k){
			flag = 1;
			printf("The element id find at %d", mid +1);
			break;
		}
		else if(arr[mid]<=k){
			low = mid + 1;
		}
		else if(arr[mid]>=k){
			high = mid - 1;
		}
	}
	if(flag == 0){
		printf("Not Found");
	}*/
	
	while(low<=high){
		mid = (high + low)/2;
		if(arr[mid]==k){
			printf("The element is find at %d", mid +1);
			return;
		}
		else if(arr[mid]<k){
			low = mid + 1;
		}
		else //if(arr[mid]>k)//
		{
			high = mid - 1;
		}
	}
	printf("Not Found");
}
