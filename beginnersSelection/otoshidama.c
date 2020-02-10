#include <stdio.h>

int	main(void)
{
	int	N, Y;
	scanf("%d %d", &N, &Y);
	if (!(1 <= N && N <= 2000))
		return (1);
	if (!(1000 <= Y && Y <= 20000000))
		return (2);
	if (!(Y % 1000 == 0))
		return (3);
	int	x = 0;
	int	y = 0;
	int	z = 0;
	while (z <= N)
	{
		y = 0;
		while (y <= N - z)
		{
			x = 0;
			while (x <= N - z - y)
			{
				if (((10000 * x) + (5000 * y) + (1000 * z)) == Y && x+y+z == N)
				{
					printf("%d %d %d\n", x, y, z);
					return (0);
				}
				x++;
			}
			y++;
		}
		z++;
	}
	printf("-1 -1 -1\n");
	return (0);
}
