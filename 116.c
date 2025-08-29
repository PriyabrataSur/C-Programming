#include<stdio.h>
#include<string.h>

union student{
	char stdName[50];
	int cls , roll ;
	char schName[50];	
};

main()
{
	union student inf1;
	printf("--- The information of the student 1---\n");
	strcpy(inf1.stdName,"Priyabrata Sur");
	printf("Name :%s\n",inf1.stdName);
	inf1.cls = 10;
	printf("Class :%d\n",inf1.cls);
	inf1.roll = 24;
	printf("Roll :%d\n",inf1.roll);
	strcpy(inf1.schName, "Chandernagore Kanailal Vidyamandir");
	printf("School Name :%s\n",inf1.schName);
	
	union student inf2;
	printf("--- The information of the student 2---\n");
	strcpy(inf2.stdName,"Debjit Laha");
	printf("Name :%s\n",inf2.stdName);
	inf2.cls = 11;
	printf("Class :%d\n",inf2.cls);
	inf2.roll = 14;
	printf("Roll :%d\n",inf2.roll);
	strcpy(inf2.schName, "Chandernagore Kanailal Vidyamandir");
	printf("School Name :%s\n",inf2.schName);
	
	union student inf;
	printf("--- The information of the student 3---\n");
	strcpy(inf.stdName,"Priyabrata Sil");
	printf("Name :%s\n",inf.stdName);
	inf.cls = 9;
	printf("Class :%d\n",inf.cls);
	inf.roll = 4;
	printf("Roll :%d\n",inf.roll);
	strcpy(inf.schName, "Chandernagore Kanailal Vidyamandir");
	printf("School Name :%s\n",inf.schName);
	
	union student inf4;
	printf("--- The information of the student 4---\n");
	strcpy(inf4.stdName,"Subrata Sur");
	printf("Name :%s\n",inf4.stdName);
	inf4.cls = 10;
	printf("Class :%d\n",inf4.cls);
	inf4.roll = 2;
	printf("Roll :%d\n",inf4.roll);
	strcpy(inf.schName, "Chandernagore Kanailal Vidyamandir");
	printf("School Name :%s\n",inf4.schName);
	
	union student inf5;
	printf("--- The information of the student 5---\n");
	strcpy(inf5.stdName,"Debjit Ghosh");
	printf("Name :%s\n",inf5.stdName);
	inf5.cls = 12;
	printf("Class :%d\n",inf5.cls);
	inf5.roll = 24;
	printf("Roll :%d\n",inf5.roll);
	strcpy(inf5.schName, "Chandernagore Kanailal Vidyamandir");
	printf("School Name :%s\n",inf5.schName);
	
	union student inf6;
	printf("--- The information of the student 6---\n");
	strcpy(inf6.stdName,"Atonu Das");
	printf("Name :%s\n",inf6.stdName);
	inf6.cls = 1;
	printf("Class :%d\n",inf6.cls);
	inf6.roll = 30;
	printf("Roll :%d\n",inf6.roll);
	strcpy(inf6.schName, "Chandernagore Kanailal Vidyamandir");
	printf("School Name :%s\n",inf6.schName);
	
	union student inf7;
	printf("--- The information of the student 7---\n");
	strcpy(inf7.stdName,"Ram Biswas");
	printf("Name :%s\n",inf7.stdName);
	inf7.cls = 12;
	printf("Class :%d\n",inf7.cls);
	inf7.roll = 19;
	printf("Roll :%d\n",inf7.roll);
	strcpy(inf7.schName, "Chandernagore Kanailal Vidyamandir");
	printf("School Name :%s\n",inf7.schName);
	
	union student inf8;
	printf("--- The information of the student 8---\n");
	strcpy(inf8.stdName,"Mridul Karmakar");
	printf("Name :%s\n",inf8.stdName);
	inf8.cls = 12;
	printf("Class :%d\n",inf8.cls);
	inf8.roll = 21;
	printf("Roll :%d\n",inf8.roll);
	strcpy(inf8.schName, "Chandernagore Kanailal Vidyamandir");
	printf("School Name :%s\n",inf8.schName);
	
	union student inf9;
	printf("--- The information of the student 9---\n");
	strcpy(inf9.stdName,"Arnab Chatterjee");
	printf("Name :%s\n",inf9.stdName);
	inf9.cls = 11;
	printf("Class :%d\n",inf9.cls);
	inf9.roll = 51;
	printf("Roll :%d\n",inf9.roll);
	strcpy(inf9.schName, "Chandernagore Kanailal Vidyamandir");
	printf("School Name :%s\n",inf9.schName);
	
	union student inf11;
	printf("--- The information of the student 10---\n");
	strcpy(inf11.stdName,"Ritabarta Sur");
	printf("Name :%s\n",inf11.stdName);
	inf11.cls = 11;
	printf("Class :%d\n",inf11.cls);
	inf11.roll = 24;
	printf("Roll :%d\n",inf11.roll);
	strcpy(inf11.schName, "Chandernagore Kanailal Vidyamandir");
	printf("School Name :%s\n",inf11.schName);
	
	
}

