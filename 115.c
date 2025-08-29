#include<stdio.h>
#include<string.h>

union student{
	char stdName[50];
	int cls , roll ;
	char schName[50];	
};

main()
{
	union student inf;
	printf("--- The information of the student ---\n");
	strcpy(inf.stdName,"Priyabrata Sur");
	printf("Name :%s\n",inf.stdName);
	inf.cls = 1;
	printf("Class :%d\n",inf.cls);
	inf.roll = 24;
	printf("Roll :%d\n",inf.roll);
	strcpy(inf.schName, "Chandernagore Kanailal Vidyamandir");
	printf("School Name :%s\n",inf.schName);
}

