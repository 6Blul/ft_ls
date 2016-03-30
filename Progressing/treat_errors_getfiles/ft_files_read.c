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

char	**ft_files_read(int len, char **files)
{
	int		i;
	char	**pd;
	int		gn;
	int		j;

	i = 1;
	j = 0;
	if (files[i][0] == '-')
	{
		while (files[i][0] == '-' && files[i])
			i++;
	}
	pd = (char **)malloc(sizeof(char *) * (len - i + 1));
	while (i <= len)
	{
		pd[j] = ft_strdup(files[i]);
		i++;
		j++;
	}
	pd[j] = 0;
	return (pd);
}