#include <stdio.h>
#include <stdlib.h>
#include <grp.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>

char	**ft_files_read(int len, char **files);

void	ft_check_valids(char *file)
{
	ft_putstr("ls: impossible d'accéder a ");
	ft_putstr(files[i]);
	ft_putstr(": Aucun fichier ou dossier de ce type\n");
}