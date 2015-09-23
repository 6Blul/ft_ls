/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_options.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 17:58:55 by spochez           #+#    #+#             */
/*   Updated: 2015/09/23 18:34:20 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

// Tab : 0 = -l / 1 = -a / 2 = -r / 3 = -t / 4 = -R / 5 = peut etre un dossier

int		*ft_treat_av(char *line, int *tab)
{
	int		i;

	i = 0;
	if (line[i] == '-' && line[i + 1])
	{
		while (line[i])
		{
			if (line[i] == 'l')
				tab[0] = 1;
			else if (line[i] == 'a')
				tab[1] = 1;
			else if (line[i] == 'r')
				tab[2] = 1;
			else if (line[i] == 't')
				tab[3] = 1;
			else if (line[i] == 'R')
				tab[4] = 1;
			i++;
		}
	}
	else
		tab[5] = 1;
	return (tab);
}

int		*ft_ls_options(char **tab, int len)
{
	int		*opt;
	int		i;

	opt = (int *)malloc(sizeof(int) * 5);
	ft_bzero(opt, 4);
	i = 1;
	while (i <= len)
	{
		opt = ft_fill_tab(tab[i], opt);
		i++;
	}
	return (opt);
}
