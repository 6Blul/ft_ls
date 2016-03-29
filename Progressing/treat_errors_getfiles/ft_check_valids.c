#include <stdio.h>
#include <stdlib.h>
#include <grp.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>

char	**ft_files_read(int len, char **files);

void	ft_check_valids(char **files)
{
	int				i;
	struct stat		buf;

	i = 0;
	while (files[i])
	{
		if (stat(files[i], &buf) < 0)
		{
			ft_putstr("ls: impossible d'acceder a ");
			ft_putstr(files[i]);
			ft_putstr(": Aucun fichier ou dossier de ce type\n");
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	char	**files;

	files = ft_files_read(ac - 1, av);
	ft_check_valids(files);
	return (0);
}