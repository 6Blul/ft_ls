//#include "ft_ls.h"
#include <stdio.h>

int		ft_are_diff(char c, char d)
{
	if (ft_islower(c) && ft_isupper(d))
		return (1);
	else if (ft_islower(d) && ft_isupper(c))
		return (1);
	return (0);
}

int		ft_mix(char c, char d)
{
	printf("c = %i d = %i\n", c, d);
	printf("c = %c d = %c\n", c, d);
	if (d > c)
	{
		if ((d - 32) - c <= 0)
			return (0);
		else
			return (1);
	}
	else if (d < c)
	{
		if ((c - 32) - d <= 0)
			return (0);
		else
			return (1);
	}
	return (0);
}



int		ft_lowups(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		printf("s1 = %s  - s2 = %s\n\n", s1, s2);
		if (s1[i] != s2[i])
		{
			//printf("coucou\n");
			if (!ft_isalpha(s1[i]) && !ft_isalpha(s2[i]))
				return (1);
			else if (ft_islower(s1[i]) && ft_islower(s2[i]))
				return (1);
			else
			{
				if (s1[i] - s2[i] == 0)
					return (ft_same(s1, s2));
				else if (ft_are_diff(s1[i], s2[i]))
					return (ft_mix(s1[i], s2[i]));
				else
					return (1);
			}
		}
		i++;
	}
	return (0);
}