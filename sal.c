#include <stdio.h>

int main() {
    // Write C code here
    float sal , bon;
    char n;
    printf("Enter the gender of the employee (M for male/ F for female) :");
    scanf("%c",&n);
    if(n=='m' || n=='M' || n=='f' || n=='F') {
		
	
    printf("Enter the salary of the employee:");
    scanf("%f",&sal);
    
    
    if(n=='m' || n=='M')
    {
        bon= sal*5/100;
    }
    else if(n=='f' || n=='F')
    {
        bon= sal*7/100;
    }
    
    if(sal<=10000)
    {
       bon = bon+ sal*2/100;
    }
    
    printf("\nThe total bonus of the employee :%f", bon);
	}else{
		printf("Enter right choice");
	}
    return 0;
}
