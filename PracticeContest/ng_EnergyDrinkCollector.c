#include <stdio.h>
#include <stdlib.h>

void    sort(int **ab, int n)
{
	int *temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (ab[i][0] > ab[i + 1][0])
			{
				temp = ab[i];
				ab[i] = ab[i + 1];
				ab[i + 1] = temp;
			}
		}
	}
}

int		main(void)
{
	int		n,m;
	scanf("%d %d", &n, &m);
	int		**ab = (int **)malloc(sizeof(int *) * n);
	for (int i = 0; i < n; i++)
		ab[i] = (int *)malloc(sizeof(int) * 2);
	for (int i = 0; i < n; i++)
		scanf("%d %d", &ab[i][0], &ab[i][1]);
	sort(ab, n);
	int		count = 0;
	long	sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; count < m && j < ab[i][1]; j++)
		{
			sum += ab[i][0];
			count++;
		}
	}
	printf("%ld\n", sum);
}