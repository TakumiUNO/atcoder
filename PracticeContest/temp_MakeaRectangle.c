#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int i, int j)
{
	int		temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void	ft_qsort(int *a, int left, int right)
{
	int		pivot = a[(left+right)/2];
	int		i = left;
	int		j = right;
	while (1)
	{
		while (a[i] > pivot)
			i++;
		while (pivot > a[j])
			j--;
		if (i >= j) 
			break;
		ft_swap(a, i, j);
		i++;
		j--;
	}
	if (left < i-1)
		ft_qsort(a, left, i-1);
	if (j+1 < right)
		ft_qsort(a, j+1, right);
}

int		main(void)
{
	int	n;
	scanf("%d", &n);
	if (!(4 <= n && n <= 100000))
		return (1);
	int	a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
		if (!(1 <= a[i] && a[i] <= 1000000000))
			return (2);
	int		left = 0;
	int		right = n - 1;
	ft_qsort(a, left, right);
	long	x = 0,y = 0;
	int		i = 0;
	while (i < n)
	{
		if (a[i] == a[i+1])
		{
			x = a[i];
			i++;
			i++;
			break;
		}
		i++;
	}
	while (i < n)
	{
		if (a[i] == a[i+1])
		{
			y = a[i];
			i++;
			i++;
			break;
		}
		i++;
	}
	// printf("x = %ld\n", x);
	// printf("y = %ld\n", y);
	printf("%ld\n", x * y);
	return (1);
}