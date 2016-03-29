/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 15:31:01 by spochez           #+#    #+#             */
/*   Updated: 2016/01/14 02:24:30 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_ls.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *s1);


char	**ft_realloc_cctab(char **tab, int len)
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
	res[i] = 0;
	return (res);
}
