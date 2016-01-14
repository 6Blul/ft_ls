/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 16:52:44 by spochez           #+#    #+#             */
/*   Updated: 2016/01/14 02:23:53 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

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
			if (ft_lowups(tab[i], tab[j]) > 0)
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
