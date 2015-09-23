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

#include "ft_ls.h"

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

	i = 0;
	while (i <= len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
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
