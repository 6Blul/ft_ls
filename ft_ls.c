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

char	**ft_get_files(char *file)
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
	char	**files;
	char	**file_opt;

	tab = ft_treat_options(av, ac);
	if (tab[4] == 1)
		ft_treat_lsl(tab, file_opt);
	file_opt = ft_files_read(ac, av);
	files = ft_get_files(".");
	return (0);
}