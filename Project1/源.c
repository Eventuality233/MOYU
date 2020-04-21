#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a[5], b[5], c[5], d[5], e[5];
	int i, n = 5, j = 0;
	while (j < 5)
	{
		for (i = 1; i <= n; i++)
			scanf_s("%d", &a[i]);
		for (i = 1; i <= n; i++)
			scanf_s("%d", &b[i]);
		for (i = 1; i <= n; i++)
		{
			if (!a[i] && !b[i])
			{
				c[i] = 0;
				d[i] = 0;
				
			}
			else if ((a[i] && !b[i]) || (!a[i] && b[i]))
			{
				c[i] = 0;
				d[i] = 1;
				
			}
			else if (a[i] && b[i])
			{
				c[i] = 1;
				d[i] = 1;
				
			}
			if (a[i] == b[i])
			{
				e[i] = 0;
			}
			else e[i] = 1;
		}
		printf("½á¹ûÎª£º\n");
		for (i = 1; i < n; i++)
			printf("%d ", c[i]);
		printf("%d\n", c[i]);
		for (i = 1; i < n; i++)
			printf("%d ", d[i]);
		printf("%d\n", d[i]);
		for (i = 1; i < n; i++)
			printf("%d ", e[i]);
		printf("%d\n", e[i]);
		j++;
	}
	return 0;
}