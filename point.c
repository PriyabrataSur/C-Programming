#include<stdio.h>

main()
{
	int a[5] , i ;
	int *p=a;
	printf("Enter the array :");
	for(i=0 ; i<5 ; i++)
	{
		/*scanf("%d",(a+i));
		scanf("%d",&a[i]);
		scanf("%d",&p[i]);*/
		scanf("%d",(p+i));
	}
	printf("The array :");
	for(i=0 ; i<5 ; i++)
	{
		/*printf("%d\n",*(a+i));
		printf("%d",a[i]);
		printf("%d",p[i]);*/
		printf("%d\n",*(p+i));
	}
}
