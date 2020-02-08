#include <stdio.h>

float		ft_abs(float a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}

float		short_angle(float s, float l)
{
	if (12 <= s)
		s -= 12;
	return ((360 * s / 12) + (360 / 12 * l / 60));
}

float		long_angle(float l)
{
	return (360 * l / 60);
}

int		main(void)
{
	float		n,m;
	scanf("%f %f", &n, &m);
	if (!(0 <= n && n <= 23))
		return (1);
	if (!(0 <= m && m <= 59))
		return (1);

	float		ans = short_angle(n, m) - long_angle(m);
	if (ans < 0)
		ans = ft_abs(ans);
	if (180 < ans)
		ans = 360 - ans;
	printf("%f\n", ans);
	return (0);
}