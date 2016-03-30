//#include "ft_ls.h"

void	ft_dir_in_l(char *s, int *tab)
{
	char	**files;
	int			i;
	int			nb;
	struct stat	buf;

	nb = 0;
	ft_putstr("\n\n");
	i = 3;
	files = ft_simple_ls(s);
	while (files[i])
	{
		stat(files[i], &buf);
		if (buf.st_size > 0)
			nb += 4;
		i++;
	}
	ft_putstr(s);
	ft_putstr(":\ntotal ");
	ft_putstr(ft_itoa(i * 4));
	ft_putchar('\n');
	ft_treat_l(tab, files);
}