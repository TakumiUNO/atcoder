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
	int	d[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &d[i]);
	if (!(1 <= n && n <= 100))
		return (n);
	for (int i = 0; i < n; i++)
		if (!(1 <= d[i] && d[i] <= 100))
			return (d[i]);
	sort(d, n);
	int	count = 1;
	for (int i = 0; i < n - 1; i++)
		if (d[i] > d[i + 1])
			count++;
	printf("%d\n", count);


}
