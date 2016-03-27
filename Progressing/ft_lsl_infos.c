#include <stdio.h>
#include <stdlib.h>
#include <grp.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

char	*ft_strdup(char *s1);
char	*ft_itoa(int n);
char	**ft_symblnk(char * file);
char	*ft_gettime(struct stat buf);

void	ft_fillright(char *droits)
{
	int		i;

	i = 0;
	while (i <= 9)
	{
		droits[i] = '-';
		i++;
	}
}

char	ft_typefile(struct stat buf)
{
	if (S_ISREG(buf.st_mode))
		return ('-');
	else if (S_ISDIR(buf.st_mode))
		return ('d');
	else if (S_ISCHR(buf.st_mode))
		return ('c');
	else if (S_ISBLK(buf.st_mode))
		return ('b');
	else if (S_ISLNK(buf.st_mode))
		return ('l');
	else if (S_ISSOCK(buf.st_mode))
		return ('s');
	else
		return ('p');
}

void	re_wr_ex(struct stat buf, char * droits)
{
	if (buf.st_mode & S_IRUSR)
		droits[1] = 'r';
	if (buf.st_mode & S_IWUSR)
		droits[2] = 'w';
	if (buf.st_mode & S_IXUSR)
		droits[3] = 'x';
	if (buf.st_mode & S_IRGRP)
		droits[4] = 'r';
	if (buf.st_mode & S_IWGRP)
		droits[5] = 'w';
	if (buf.st_mode & S_IXGRP)
		droits[6] = 'x';
	if (buf.st_mode & S_IROTH)
		droits[7] = 'r';
	if (buf.st_mode & S_IWOTH)
		droits[8] = 'w';
	if (buf.st_mode & S_IXOTH)
		droits[9] = 'x';
}

char	*ft_rights(struct stat buf)
{
	char	*droits;

	droits = (char *)malloc(sizeof(char) * 10);
	ft_fillright(droits);
	droits[0] = ft_typefile(buf);
	re_wr_ex(buf, droits);
	droits[10] = 0;
	return (droits);
}

void	ft_lsl_infos(char *file)
{
	struct stat		buf;
	struct group	*gid;
	struct passwd	*uid;
	char		**datas;

	stat(file, &buf);
	if (S_ISLNK(buf.st_mode))
		datas = ft_symblnk(file);
	else
	{
		datas = (char **)malloc(sizeof(char *) * 7);
		/*droits et types*/datas[0] = ft_rights(buf);
		/*liens materiels*/datas[1] = ft_itoa((int)buf.st_nlink);
		/*UID*/uid = getpwuid(buf.st_uid);
		datas[2] = ft_strdup(uid->pw_name);
		/*GID*/gid = getgrgid(buf.st_gid);
		datas[3] = ft_strdup(gid->gr_name);
		/*nb d'octets ecrits*/datas[4] = ft_itoa((int)buf.st_size);
		/*derniere modif*/datas[5] = ft_gettime(buf);
		/*nom du fichier*/datas[6] = ft_strdup(file);
	}
	printf("%s %s %s %s %s %s %s\n", datas[0], datas[1], datas[2], datas[3], datas[4], datas[5], datas[6]);
}

int main(int ac, char **av)
{
	ft_lsl_infos(av[1]);
	return 0;
}