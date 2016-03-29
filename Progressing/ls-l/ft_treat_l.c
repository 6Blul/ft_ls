#include <stdio.h>
#include <stdlib.h>
#include <grp.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

char	**ft_lsl_infos(char *file);
char	**ft_order_time(char **list, int len);
char	**ft_order_invtime(char **list, int len);
char	**ft_order(char **tab, int len);
char	**ft_ccswaporder(char **tab, int len);
void	ft_putstr(char *s);
void	ft_putchar(char c);
char	*ft_strdup(char *s1);
char	**ft_troncate_a(char **files, int len);

void	ft_print_l(char *file)
{
	char	**infos;
	int 	i;

	i = 1;
	infos = ft_lsl_infos(file);
	ft_putstr(infos[0]);
	while (i < 7)
	{
		ft_putchar(' ');
		ft_putstr(infos[i]);
		i++;
	}
}

void	ft_print_lfiles(char **files, int len)
{
	int 	i;

	i = 0;
	while (i < len)
	{
		ft_print_l(files[i]);
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

void	ft_treat_l(int *tab, char **files)
{
	/*ls -R*//*if (tab[0] == 1)
		ft_treat_R(tab, files);
	*/
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
	ft_print_lfiles(files, ft_cc_len(files));
}

int 	main(int ac, char **av)
{
	int 	*tab;

	tab = (int *)malloc(sizeof(int) * 4);
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 0;
	tab[3] = 0;
	ft_treat_l(tab, av);
	return (0);
}