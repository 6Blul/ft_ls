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
	if (ac == 1)
		ft_ls_simple();
	//else
	//	ft_ls_args(ac, av);
	return (0);
}