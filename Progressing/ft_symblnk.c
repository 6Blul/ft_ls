#include <stdio.h>
#include <stdlib.h>
#include <grp.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

char	*ft_strdup(char *s1);
char	*ft_itoa(int n);
char	*ft_rights(struct stat buf);

char	**ft_symblnk(char *file)
{
	struct stat			buf;
	struct group		*gid;
	struct passwd		*uid;
	char			**datas;

	lstat(file, &buf);
	datas = (char **)malloc(sizeof(char *) * 7);
	/*droits et types*/datas[0] = ft_rights(buf);
	/*liens materiels*/datas[1] = ft_itoa((int)buf.st_nlink);
	/*UID*/uid = getpwuid(buf.st_uid);
	datas[2] = ft_strdup(uid->pw_name);
	/*GID*/gid = getgrgid(buf.st_gid);
	datas[3] = ft_strdup(gid->gr_name);
	/*nb d'octets ecrits*/datas[4] = ft_itoa((int)buf.st_size);
	/*derniere modif*/
	/*nom du fichier*/datas[6] = ft_strdup(file);
	return (datas);
}