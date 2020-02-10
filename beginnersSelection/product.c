#include <stdio.h>

int	main()
{
	int	a;
	int	b;

	scanf("%d %d", &a, &b);
	if ((a * b) % 2 == 0)
		printf("Even\n");
	if ((a * b) % 2 == 1)
		printf("Odd\n");

	return (0);
}
