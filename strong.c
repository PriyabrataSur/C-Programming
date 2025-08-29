#include<stdio.h>

int fact(int r){
    int fact =1 ;
    while (r>1){
        fact = fact*r;
        r--;
    }
    return fact;
}
int isStrngNum(int n){
    int temp =n,rem,sum=0;
    while(temp>0){
        rem = temp%10;
        sum = sum+fact(rem);
        temp=temp/10;
    }
    return (sum == n);
}
int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    if(isStrngNum(n)){
    printf("%d is storng number ",n);
    }
    else{
        printf("%d is not a storng number ",n);  
    }
    return 0;
}
