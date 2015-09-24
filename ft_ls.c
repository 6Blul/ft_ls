#include "ft_ls.h"

void	ft_print_simple(char **tab, int len)
{
	int		i;
	int		j;
	char	*temp;

	j = 0;
	while (j < len)
	{
		i = len + 1;
		while (i < len)
		{
			if (strcmp(tab[i], tab[j]) < 0)
			{
				temp = ft_strdup(tab[i]);
				tab[i] = ft_strdup(tab[j]);
				tab[j] = ft_strdup(temp);
			}
			i++;
		}
		j++;
	}
	i = 0;
	while (i < len)
	{
		ft_putstr(tab[i]);
		i++;
	}
}

void	ft_ls_simple()
{
	DIR				*current;
	struct dirent	*direc;
	char			**pd;
	int				len;

	len = 0;
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
		ft_print_simple(pd, len);
	}
	closedir(current);
}

int		main(int ac, char **av)
{
	(void)av;
	if (ac == 1)
		ft_ls_simple();
	//else
	//	ft_ls_args(ac, av);
	return (0);
}