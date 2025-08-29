#include<stdio.h>
#include<string.h>

struct student{
	char stdName[50];
	int cls , roll ;
	char schName[50];	
};

main()
{
	struct student inf1;
	strcpy(inf1.stdName,"Priyabrata");
	inf1.cls=11;
	inf1.roll=25;
	strcpy(inf1.schName,"Kanailal Vidyamandir");
	
	struct student inf2;
	strcpy(inf2.stdName,"Sayan");
	inf2.cls=11;
	inf2.roll=15;
	strcpy(inf2.schName,"Kanailal Vidyamandir");
	
	struct student inf3;
	strcpy(inf3.stdName,"Soumaditya");
	inf3.cls=11;
	inf3.roll=23;
	strcpy(inf3.schName,"Banga Vidyalaya");
	
	struct student inf4;
	strcpy(inf4.stdName,"Aritro");
	inf4.cls=11;
	inf4.roll=39;
	strcpy(inf4.schName,"Banga Vidyalaya");
	
	struct student inf5;
	strcpy(inf5.stdName,"Rayan");
	inf5.cls=12;
	inf5.roll=2;
	strcpy(inf5.schName,"Kanailal Vidyamandir");
	
	struct student inf6;
	strcpy(inf6.stdName,"Debjit");
	inf6.cls=9;
	inf6.roll=5;
	strcpy(inf6.schName,"Kanailal Vidyamandir");
	
	struct student inf7;
	strcpy(inf7.stdName,"Rup Kumar");
	inf7.cls=12;
	inf7.roll=4;
	strcpy(inf7.schName,"Kanailal Vidyamandir");
	
	struct student inf8;
	strcpy(inf8.stdName,"Arijit");
	inf8.cls=12;
	inf8.roll=9;
	strcpy(inf8.schName,"Banga Vidyalaya");
	
	struct student inf9;
	strcpy(inf9.stdName,"Ashis");
	inf9.cls=10;
	inf9.roll=12;
	strcpy(inf9.schName,"Banga Vidyalaya");
	
	struct student inf10;
	strcpy(inf10.stdName,"Rudranil");
	inf10.cls=10;
	inf10.roll=11;
	strcpy(inf10.schName,"Kanailal Vidyamandir");
	
	printf("\n--- The information of the student 1 ---\n");
	printf("\n%s\n",inf1.stdName);
	printf("%d\n",inf1.cls);
	printf("%d\n",inf1.roll);
	printf("%s\n",inf1.schName);
	
	printf("\n--- The information of the student 2 ---\n");
	printf("\n%s\n",inf2.stdName);
	printf("%d\n",inf2.cls);
	printf("%d\n",inf2.roll);
	printf("%s\n",inf2.schName);
	
	printf("\n--- The information of the student 3 ---\n");
	printf("\n%s\n",inf3.stdName);
	printf("%d\n",inf3.cls);
	printf("%d\n",inf3.roll);
	printf("%s\n",inf3.schName);
	
	printf("\n--- The information of the student 4 ---\n");
	printf("\n%s\n",inf4.stdName);
	printf("%d\n",inf4.cls);
	printf("%d\n",inf4.roll);
	printf("%s\n",inf4.schName);
	
	printf("\n--- The information of the student 5 ---\n");
	printf("\n%s\n",inf5.stdName);
	printf("%d\n",inf5.cls);
	printf("%d\n",inf5.roll);
	printf("%s\n",inf5.schName);
	
	printf("\n--- The information of the student 6 ---\n");
	printf("\n%s\n",inf6.stdName);
	printf("%d\n",inf6.cls);
	printf("%d\n",inf6.roll);
	printf("%s\n",inf6.schName);
	
	printf("\n--- The information of the student 7 ---\n");
	printf("\n%s\n",inf7.stdName);
	printf("%d\n",inf7.cls);
	printf("%d\n",inf7.roll);
	printf("%s\n",inf7.schName);
	
	printf("\n--- The information of the student 8 ---\n");
	printf("\n%s\n",inf8.stdName);
	printf("%d\n",inf8.cls);
	printf("%d\n",inf8.roll);
	printf("%s\n",inf8.schName);
	
	printf("\n--- The information of the student 9 ---\n");
	printf("\n%s\n",inf9.stdName);
	printf("%d\n",inf9.cls);
	printf("%d\n",inf9.roll);
	printf("%s\n",inf9.schName);
	
	printf("\n--- The information of the student 10 ---\n");
	printf("\n%s\n",inf10.stdName);
	printf("%d\n",inf10.cls);
	printf("%d\n",inf10.roll);
	printf("%s\n",inf10.schName);
	
		
}

