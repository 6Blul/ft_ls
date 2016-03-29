#include <stdio.h>
#include <stdlib.h>
#include <grp.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

char	*ft_strdup(char *s1);
char	**ft_realloc_cctab(char **tab, int len);

char	**ft_troncate_a(char **files, int len)
{
	int		i;
	char	**res;
	int		j;

	i = 0;
	j = 0;
	res = (char **)malloc(sizeof(char *) * 1);
	while (files[i])
	{
		if (files[i][0] != '.' && files[i])
		{
			ft_realloc_cctab(res, j);
			res[j] = ft_strdup(files[i]);
			j++;
		}
		i++;
	}
	res[j] = 0;
	return (res);
}