/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 15:31:01 by spochez           #+#    #+#             */
/*   Updated: 2015/09/23 17:00:56 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	**ft_realloc_tab(char **tab, int len)
{
	char	**res;
	int		i;

	res = (char **)malloc(sizeof(char *) * len + 1);
	i = 0;
	while (i < len)
	{
		res[i] = ft_strdup(tab[i]);
		i++;
	}
	return (res);
}