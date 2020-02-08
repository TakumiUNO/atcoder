#include <stdio.h>
#include <stdlib.h>

void	printarr(int **ab, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d %d, ", ab[i][0], ab[i][1]);
	printf("\n");
}

void	ft_swap(int **ab, int i, int j)
{
	int		*temp;
	temp = ab[i];
	ab[i] = ab[j];
	ab[j] = temp;
}

void	ft_qsort(int **ab, int left, int right, int n)
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
	{
		printf("left i = %d, j = %d\n", i, j);
		printarr(ab, n);
		ft_qsort(ab, left, i-1, n);
	}
	if (j+1 < right) // 右側のソートがうまく行ってない
	{
		printf("right i = %d, j = %d\n", i, j);
		printarr(ab, n);
		ft_qsort(ab, j+1, right, n);
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
	int		left = 0;
	int		right = n - 1;
	ft_qsort(ab, left, right, n);
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