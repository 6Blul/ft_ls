//#include "ft_ls.h"
#include <stdio.h>
#include <stdlib.h>
#include <grp.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

char	*ft_strdup(char *s1);
char	**ft_realloc_cctab(char **tab, int len);

void	ft_afficher_erreur(char **files, int pos)
{
	char	c;

	c = files[pos][1];
	printf("ls : option invalide -- '%c'\n", c);
	exit(0);
}

char	**ft_files_read(int len, char **files)
{
	int		i;
	char	**pd;
	int		gn;
	int		j;

	i = 1;
	pd = (char **)malloc(sizeof(char *) * 1);
	while (i < len && files[i][0] == '-')
		i++;
	j = 0;
	while (i < len && files[i][0] != '-')
	{
		if (j > 0)
			ft_realloc_cctab(pd, j);
		pd[j] = ft_strdup(files[i]);
		i++;
		j++;
	}
	if (files[i][0] == '-' || len > i)
		ft_afficher_erreur(files, i);
	return (pd);
}

int 	main(int ac, char **av)
{
	char	**pd;

	pd = ft_files_read(ac, av);
	printf("%s\n%s\n%s\n", pd[1], pd[2], pd[3]);
	return 0;
}