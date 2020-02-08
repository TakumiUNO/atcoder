#include <stdio.h>
#include <stdlib.h>

int		countpat(int n)
{
	int		x = 1, y = 1;
	int		count = 0;
	while (x <= 9)
	{
		y = 1;
		while (y <= 9)
		{
			if (x * y == n)
				count++;
			y++;
		}
		x++;
	}
	return (count);

}

int		ninepat(int n, int **ans)
{
	int		x = 1, y = 1;
	int		i = 0;
	while (x <= 9)
	{
		y = 1;
		while (y <= 9)
		{
			if (n == x * y)
			{
				ans[i][0] = x;
				ans[i][1] = y;
				i++;
			}
			y++;
		}
		x++;
	}
	return (i);
}
int		main(void)
{
	int		n;
	scanf("%d", &n);
	if (!(1944 <= n && n <= 2024))
		return (1);
	int		digi = 2025 - n;
	int		count = countpat(digi);
	int		**ans = (int **)malloc(sizeof(int *) * count);
	for (int i = 0; i < count; i++)
		ans[i] = (int *)malloc(sizeof(int) * 2);
	int		nums = ninepat(digi, ans);
	for (int i = 0; i < nums; i++)
		printf("%d x %d\n", ans[i][0], ans[i][1]);
	return (0);
}
