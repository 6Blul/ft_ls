#include "ft_ls.h"

char	*ft_realloc_ctab(char *tab, int len)
{
	char	*n;
	int		i;

	i = 0;
	n = (char *)malloc(sizeof(char) * len + 2);
	while (i <= len)
	{
		n[i] = tab[i];
		i++;
	}
	return (n);
}