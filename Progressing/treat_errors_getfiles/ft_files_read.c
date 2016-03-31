//#include "ft_ls.h"
#include <stdio.h>
#include <stdlib.h>
#include <grp.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

char	*ft_strdup(char *s1);
void	ft_putstr(char *s);
void	ft_putchar(char c);
void	ft_check_valids(char *file);
char	**ft_realloc_cctab(char **tab, int len);

char	**ft_fill_files(int	i, int len, char **files)
{
	char			**res;
	struct stat		buf;
	int				j;

	j = 0;
	while (i <= len)
	{
		stat(files[i], &buf);
		if (stat(files[i], &buf) >= 0)
		{
			res = ft_realloc_cctab(res, j);
			res[j] = ft_strdup(files[i]);
			j++;
		}
		else
			ft_check_valids(files[i]);
		i++;
	}
	res[j] = 0;
}

char	**ft_files_read(int len, char **files)
{
	int		i;
	char	**pd;

	i = 1;
	if (files[i][0] == '-')
	{
		while (files[i][0] == '-' && files[i + 1])
			i++;
	}
	if (i < len || files[i][0] != '-')
		pd = ft_fill_files(i, len, files);
	else
		pd = ft_simple_ls(".");
	return (pd);
}