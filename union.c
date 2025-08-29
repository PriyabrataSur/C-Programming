#include<stdio.h>

union  date{
	int d ,m, y;
	char day; 
};

main()
{
	union date today ;
	today.d =21;
	printf("Date :%d\t",today.d);
	today.d =07;
	printf("month :%d\t",today.m);
	today.y =2024;
	printf("Year :%d\t\n",today.y);
	
	/*union date tomorrow ={
		22, 07 , 2024 
	};
	 printf("Date :%d\t",tomorrow.d);
	 printf("month :%d\t",tomorrow.m);
	 printf("year :%d\t",tomorrow.y);*/
	
}
