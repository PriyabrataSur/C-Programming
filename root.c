#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c , r1, r2, dscrmnt, imgnry, real;
	printf("Enter three values : ");
	scanf("%lf %lf %lf",&a, &b, &c);
	dscrmnt = ((b*b)-4*a*c);
	if(dscrmnt > 0)
	{
		r1 = (-b+sqrt(dscrmnt))/(2*a);
		r2 = (-b-sqrt(dscrmnt))/(2*a);
		printf("Roots are real and different");
		printf("\nThe roots are: %lf %lf", r1, r2);
	}
	else if(dscrmnt == 0)
	{
		r1 = -b/(2*a);
		r2 = r1;
		printf("Roots are real and equal");
		printf("\nThe roots are: %lf %lf", r1, r2);
	}
	else
	{
		real = -b/(2*a);
		imgnry = sqrt(-dscrmnt)/(2*a); 
		printf("Roots are imaginary");
		printf("\nThe roots are: %lf +- %lf", real, imgnry);
	}
}
