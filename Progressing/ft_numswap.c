#include "ft_ls.h"
/*#include <stdio.h>
#include <stdlib.h>
*/


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

/*int		main()
{
	int		*pd;

	pd = (int *)malloc(sizeof(int *) * 6);
	pd[0] = 12;
	pd[1] = 8441;
	pd[2] = 12201;
	pd[3] = 2;
	pd[4] = 5;
	pd[5] = -152;
	printf("gropd");
	printf("%i %i %i %i %i %i\n", pd[0], pd[1], pd[2], pd[3], pd[4], pd[5]);
	printf("gropd");
	ft_numswap_inv(pd, 5);
	printf("%i %i %i %i %i %i\n", pd[0], pd[1], pd[2], pd[3], pd[4], pd[5]);
	return 0;
}*/
