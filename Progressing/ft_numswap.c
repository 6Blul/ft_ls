//#include "ft_ls.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_numswap(int *tab, int len)
{
	int		i;
	int		j;
	int		tp;

	i = 0;
	while (i <= len)
	{
		j = i + 1;
		while (j <= len)
		{
			if (tab[j] < tab[i])
			{
				tp = tab[j];
				tab[j] = tab[i];
				tab[i] = tp;
			}
			j++;
		}
		i++;
	}
}

void	ft_numswap_inv(int *tab, int len)
{
	int		i;
	int		j;
	int		tp;

	i = 0;
	while (i <= len)
	{
		j = i + 1;
		while (j <= len)
		{
			if (tab[j] > tab[i])
			{
				tp = tab[j];
				tab[j] = tab[i];
				tab[i] = tp;
			}
			j++;
		}
		i++;
	}
}