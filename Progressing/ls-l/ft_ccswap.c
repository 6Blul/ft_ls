//#include "ft_ls.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *s1);
char	**ft_order(char **tab, int len);

char	**ft_ccswaporder(char **tab, int len)
{
	int		i;
	char	**c;

	i = 0;
	tab = ft_order(tab, len);
	c = (char **)malloc(sizeof(char *) * len + 1);
	len--;
	while (len > 0)
	{
		c[i] = ft_strdup(tab[len]);
		i++;
		len--;
	}
	return (c);
}