#include <stdio.h>
#include <stdlib.h>

int		compar_int(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int		main(void)
{
	int	n;
	scanf("%d", &n);
	if (!(4 <= n && n <= 100000))
		return (1);
	int	a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
		if (!(1 <= a[i] && a[i] <= 1000000000))
			return (2);
	qsort(a, n, sizeof(int), compar_int);
	long	x = 0,y = 0;
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
	// printf("x = %ld\n", x);
	// printf("y = %ld\n", y);
	printf("%ld\n", x * y);
	return (0);
}