#include<stdio.h>

struct date{
	int d ,m, y;
	char day; 
	char dayName[10];
};

main()
{
	struct date today = {
		22 , 7 , 2024 , 'M' , "Monday"
	};
	printf("Date :%d\t",today.d);
	printf("month :%d\t",today.m);
	printf("Year :%d\t",today.y);
	printf("%c\t",today.day);
	printf("%s\n",today.dayName);
	printf("Date :%d/%d/%d",today.d, today.m, today.y);
}
