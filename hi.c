#include<stdio.h>
#include<string.h>

struct std{
	char address[40];
	char name[40];
}data, data1;
main()
{
	//struct std inf;
	//strcpy(inf.address ,"Chandernagore");
	//printf("%s",inf.address);
	strcpy(data.address, "hooghly");
	printf("%s\n",data.address);
	strcpy(data1.address, "kolkata");
	printf("%s\n",data1.address);
}
