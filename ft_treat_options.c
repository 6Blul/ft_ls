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

// Tab : 0 = -R / 1 = -a / 2 = -r / 3 = -t / 4 = -l 
	
int		*ft_fill_tab(char *line, int *tab)
{
	int		i;

	i = 1;
	while (line[i])
	{
		if (line[i] == 'R')
			tab[0] = 1;
		else if (line[i] == 'a')
			tab[1] = 1;
		else if (line[i] == 'r')
			tab[2] = 1;
		else if (line[i] == 't')
			tab[3] = 1;
		else if (line[i] == 'l')
			tab[4] = 1;
		else
		{
			ft_putstr("invalid option : ");
			ft_putstr(line[i]);
			ft_putchar('\n');
			exit(0);
		}
		i++;
	}
	return (tab);
}

int		*ft_ls_options(char **tab, int len)
{
	int		*opt;
	int		i;

	opt = (int *)malloc(sizeof(int) * 5);
	ft_bzero(opt, 20);
	i = 1;
	while (i <= len && av[i][0] == '-')
	{
		opt = ft_fill_tab(tab[i], opt);
		i++;
	}
	return (opt);
}
