#include <stdio.h>
void main()
{
	int i, j, c, n, k;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		c = 1;
		for (k = n - i; k >= 1; k--)
		{
			printf(" ");
		}
		for (j = 1; j <= (2 * i - 1); j++)
		{
			printf("%d", c);
			c = c + 2;
		}
		printf("\n");
	}
}
