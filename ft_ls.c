/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 02:23:34 by spochez           #+#    #+#             */
/*   Updated: 2016/01/14 02:23:35 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_ls_simple()
{
	DIR				*current;
	struct dirent	*direc;
	char			**pd;
	int				len;
	int				i;

	len = 0;
	i = 0;
	pd = (char **)malloc(sizeof(char *));
	current = opendir(".");
	while (direc != NULL)
	{
		direc = readdir(current);
		if (direc != NULL && direc->d_name[0] != '.')
		{
			if (len > 0)
				pd = ft_realloc_tab(pd, len);
			pd[len] = ft_strdup(direc->d_name);
			len++;
		}
	}
	pd = ft_order(pd, len);
	while (i < len)
	{
		ft_putstr(pd[i]);
		ft_putchar('\n');
		i++;
	}
	free(pd);
	closedir(current);
}

int		main(int ac, char **av)
{
	(void)av;
	int		*tab;

	if (ac == 1)
		ft_ls_simple();
	else
	{
		tab = ft_treat_options(av, ac)
	}
	return (0);
}
