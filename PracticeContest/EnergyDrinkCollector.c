#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int **ab, int i, int j)
{
	int		*temp;
	temp = ab[i];
	ab[i] = ab[j];
	ab[j] = temp;
}

void	ft_qsort(int **ab, int left, int right)
{
	int		pivot = ab[(left+right)/2][0];
	int		i = left;
	int		j = right;
	while (1)
	{
		while (ab[i][0] < pivot)
			i++;
		while (pivot < ab[j][0])
			j--;
		if (i >= j) 
			break;
		ft_swap(ab, i, j);
		i++;
		j--;
	}
	if (left < i-1)
		ft_qsort(ab, left, i-1);
	if (j+1 < right)
		ft_qsort(ab, j+1, right);
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
	int		left = 0;
	int		right = n - 1;
	ft_qsort(ab, left, right);
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