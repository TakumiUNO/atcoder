#include <stdio.h>
#include <stdlib.h>

int		compar_int(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int		main(void)
{
	int		n;
	scanf("%d", &n);
	int		a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	qsort(a, n, sizeof(int), compar_int);
	int		x = 0,y = 0;
	int		i = 0;
	while (i < n)
	{
		if (a[i] == a[i+1])
		{
			x = a[i];
			i++;
			i++;
			break;
		}
		i++;
	}
	while (i < n)
	{
		if (a[i] == a[i+1])
		{
			y = a[i];
			i++;
			i++;
			break;
		}
		i++;
	}
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("%d\n", x * y);
}