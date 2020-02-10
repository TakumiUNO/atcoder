#include <stdio.h>

void	sort(int *a, int n)
{
	int temp = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i] < a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
}

int	main(void)
{
	int	n;
	scanf("%d", &n);
	int	a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(&a[0], n);
	int	alice = 0;
	for (int i = 0; i < n;)
	{
		alice += a[i];
		i += 2;
	}
	int	bob = 0;
	for (int i = 1; i < n;)
	{
		bob += a[i];
		i += 2;
	}
	printf("%d\n", alice - bob);
	return (0);
}
