#include<stdio.h>

struct student{
	char stdName[50];
	int cls , roll ;
	char schName[50];	
};

main()
{
	struct student inf={
		"Priyabrata Sur" , 01 , 24 , "Chandernagore Kanailal Vidyamandir"  
	};
	printf("--- The information of the student ---\n");
	printf("Name :%s\n",inf.stdName);
	printf("Class :%d\n",inf.cls);
	printf("Roll :%d\n",inf.roll);
	printf("School Name :%s\n",inf.schName);
}
