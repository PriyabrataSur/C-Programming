#include<stdio.h>
#include<math.h>
int main()
{4
	double grosSal, da, har, basSal;
	printf("Enter your basic salary : ");
	scanf("%lf",&basSal);
	da = .15 * basSal;
	har = .74 * basSal;
	grosSal = basSal + da + har;
	printf("%lf",grosSal);
}
