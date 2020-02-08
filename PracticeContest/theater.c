#include <stdio.h>

int		main(void)
{
	int		n;
	scanf("%d", &n);
	int		l[n];
	int		r[n];
	for (int i = 0; i < n; i++)
		scanf("%d %d", &l[i], &r[i]);
	if (!(1 <= n && n <= 1000))
		return (1);
	for (int i = 0; i < n; i++)
		if (!(1 <= l[i] && l[i] <= r[i] && r[i] <= 100000))
			return (1);
	int		nb = 0;
	for (int i = 0; i < n; i++)
	{
		nb += r[i] - l[i] + 1;
	}
	printf("%d\n", nb);
}