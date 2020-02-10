#include <stdio.h>

int	main(void)
{
	int	a, b, c;
	int	sum;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &sum);
	if (!(0 <= a && a <= 50))
		return (0);
	if (!(0 <= b && b <= 50))
		return (0);
	if (!(0 <= c && c <= 50))
		return (0);
	if (!(50 <= sum && sum <= 20000))
		return (0);
	if (!(sum % 50 == 0))
		return (0);

	int	x = 0, y, z;
	int	count = 0;
	while (x <= a)
	{
		y = 0;
		while (y <= b)
		{
			z = 0;
			while (z <= c)
			{
				if (((500 * x) + (100  * y) + (50 * z)) == sum)
					count++;
				z++;
			}
			y++;
		}
		x++;
	}
	printf("%d\n", count);
		
	return (0);
}
