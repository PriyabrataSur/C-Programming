#include<stdio.h>
#include<string.h>

union std{
	char name[50];
	int cls ,roll;	
}data;
main()
{
	/*union std inf;
	inf.cls = 3;
	printf("%d\t",inf.cls);
	inf.roll = 19;
	printf("%d\t",inf.roll);
	strcpy(inf.name, "Sayan");*/
	strcpy(data.name, "Sayan");
	printf("%s",data.name);
}
