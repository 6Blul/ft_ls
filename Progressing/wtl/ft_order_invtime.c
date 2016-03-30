#include <stdio.h>
#include <stdlib.h>
#include <grp.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
//#include "ft_ls.h"

char	*ft_strdup(char *s1);

char	**ft_order_invtime(char **list, int len)
{
	struct stat		buf;
	struct stat		buf2;
	int				i;
	int				j;
	char			*tp;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		stat(list[i], &buf);
		while (j < len)
		{
			stat(list[j], &buf2);
			if (buf2.st_mtime < buf.st_mtime)
			{
				tp = ft_strdup(list[i]);
				list[i] = ft_strdup(list[j]);
				list[j] = ft_strdup(tp);
				free(tp);
			}
			j++;
		}
		i++;
	}
	return (list);
}