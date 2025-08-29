#include<stdio.h>
#include<string.h>

int main()
{
	struct classXII{
		char name[20] ;
		int roll;
	};
	struct classXII p1, p2;
	
	//p1.name = "Ram";
	p1.roll = 01;
	//p2.name = "Sohom"
	p2.roll = 02;
	//printf("Name of Student 1 :%s",p1.id);
	printf("Roll of Student 1 :%d",p1.roll);
	//printf("Name of Student 2 :%s",p2.id);
	printf("Roll of Student 2 :%d",p2.roll);
}
