#include "ft_ls.h"

char	*ft_ccswaporder(char **tab, int len)
{
	int		i;
	char	**c;

	i = 0;
	tab = ft_order(tab, len);
	c = (char **)malloc(sizeof(char *) * len + 1);
	while (len > 0)
	{
		c[i] = ft_strdup(tab[len]);
		i++;
		len--;
	}
	return (c);
}