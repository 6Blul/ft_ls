#include "ft_ls.h"

int		*ft_realloc_itab(int *tab, int len)
{
	int		i;
	int		*n;

	i = 0;
	n = (int *)malloc(sizeof(int) * len + 1);
	while (i <= len)
	{
		n[i] = tab[i];
		i++;
	}
	return (n);
}