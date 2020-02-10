#include <stdio.h>

int	digisum(int n)
{
	int	dsum = 0;
	dsum += n / 10000;
	n = n % 10000;
	dsum += n / 1000;
	n = n % 1000;
	dsum += n / 100;
	n = n % 100;
	dsum += n / 10;
	dsum += n % 10;
	return (dsum);
}

int	main(void)
{
	int	n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	if (!(1 <= n && n <= 10000))
		return (1);
	if (!(1 <= a && a <= b && b <= 36))
		return (2);
	int	i = 1;
	int	sum = 0;
	while (i <= n)
	{
		if (a <= digisum(i) && digisum(i) <= b)
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
