#include <stdio.h>
#include <stdlib.h>
#include <grp.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>

char	**ft_strsplit(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *s);

char	*ft_cut(char *s1)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = ft_strlen(s1) - 3;
	res = (char *)malloc(sizeof(char) * len + 1);
	while (i < len)
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

char	*ft_gettime(struct stat buf)
{
	char	*pd;
	char	*res;
	char	**split;

	pd = ctime(&buf.st_mtime);
	split = ft_strsplit(pd, ' ');
	res = ft_strjoin(split[1], split[2]);
	res = ft_strjoin(res, split[3]);
	res = ft_cut(res);
	return (res);
}