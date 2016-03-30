#include <stdio.h>
#include <stdlib.h>
#include <grp.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

char	**ft_troncate_a(char **files, int len);
char	*ft_strdup(char *s1);
char	**ft_order_time(char **list, int len);
char	**ft_order_invtime(char **list, int len);
char	**ft_order(char **tab, int len);
char	**ft_ccswaporder(char **tab, int len);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

void	ft_print_files(char **files, int len)
{
	int 	i;

	i = 0;
	while (i < len)
	{
		ft_putstr(files[i]);
		ft_putchar('\n');
		i++;
	}
}

int		ft_cc_len(char **s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_treat_wtl(int *tab, char **files)
{
	/*ls -R*//*if (tab[0] == 1)
		ft_treat_R(tab, files);
	*/
	if (tab[0] == 0)
	{
		if (tab[0] == 0)
		{
			if (tab[2] == 1 && tab[3] == 1)
				files = ft_order_invtime(files, ft_cc_len(files));
			else if (tab[2] == 1 && tab[3] == 0)
				files = ft_ccswaporder(files, ft_cc_len(files));
			else if (tab[2] == 0 && tab[3] == 1)
				files = ft_order_time(files, ft_cc_len(files));
			else
				files = ft_order(files, ft_cc_len(files));
		}
		if (tab[1] == 0)
			files = ft_troncate_a(files, ft_cc_len(files));
	}
	ft_print_files(files, ft_cc_len(files));
}