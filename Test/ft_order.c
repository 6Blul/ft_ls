/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 16:52:44 by spochez           #+#    #+#             */
/*   Updated: 2015/09/23 18:35:49 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

char	**ft_order(char **tab, int len)
{
	int		i;
	int		j;
	char	*tp;
	int		cmp;

	i = 0;
	while (i <= len)
	{
		j = i + 1;
		while (j < len)
		{
			cmp = ft_strcmp(tab[i], tab[j]);
			printf("lowups = %i\n", ft_lowups(tab[i], tab[j]));
			if (cmp > 0 && ft_lowups(tab[i], tab[j]))
			{
				tp = tab[j];
				tab[j] = tab[i];
				tab[i] = tp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int		main(int ac, char **av)
{
	int		i;
	char	**res;

	i = 0;
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	i = 0;
	res = ft_order(av, ac);
	while (i < ac)
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}