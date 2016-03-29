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

void	ft_print(char **tab, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		if (tab[i][0] != '.')
		{
			ft_putstr(tab[i]);
			ft_putchar('\n');
		}
		i++;
	}
}

void	ft_simple_ls()
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
		if (direc != NULL)
		{
			if (len > 0)
				pd = ft_realloc_tab(pd, len);
			pd[len] = ft_strdup(direc->d_name);
			len++;
		}
	}
	pd = ft_order(pd, len);
	closedir(current);
	return (pd);
}

int		main(int ac, char **av)
{
	int		*tab;
	char	**file_opt;

	if (ac == 1)
		ft_simple_ls();
	tab = ft_treat_options(av, ac);
	file_opt = ft_files_read(ac, av)
	if (tab[4] == 1)
		ft_treat_l(tab, file_opt);
	else
		ft_ls_opt(tab, file_opt);
	return (0);
}