//Retire les x premiers caracteres de s - ex "bonjour" + 3 devient "jour"
//#include "ft_ls.h"

int		ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_cut_s(char *s, int cut)
{
	char	*pd;
	int		i;
	int		len;
	int		s_len;

	i = 0;
	s_len = ft_strlen(s);
	len = (s_len - cut);
	pd = (char *)malloc(sizeof(char) * len + 1);
	while (s[cut])
	{
		pd[i] = s[cut];
		i++;
		cut++;
	}
	return (pd);
}