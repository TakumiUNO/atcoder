#include <stdio.h>

int	main()
{
	int	a;
	int	b;
	int	c;
	char	t[256];

	scanf("%d", &a);
	scanf("%d %d", &b, &c);
	scanf("%s", t);
	printf("%d %s\n", a+b+c, t);
}
